/*
 *
 * (C) COPYRIGHT 2010-2020 Samsung Electronics Inc. All rights reserved.
 *
 * This program is free software and is provided to you under the terms of the
 * GNU General Public License version 2 as published by the Free Software
 * Foundation, and any use by you of this program is subject to the terms
 * of such GNU licence.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you can access it online at
 * http://www.gnu.org/licenses/gpl-2.0.html.
 *
 * SPDX-License-Identifier: GPL-2.0
 *
 */

#if IS_ENABLED(CONFIG_MALI_USES_LLC)

#include <string.h>

#include <mali_kbase.h>
#include "mali_kbase_platform.h"
#include "gpu_llc.h"

#include <soc/samsung/exynos-sci.h>

int gpu_llc_set(struct kbase_device *kbdev, int ways)
{
	int ret = 0;
	struct exynos_context *platform;

	if (kbdev == NULL || kbdev->platform_context == NULL)
		return -EINVAL;

	platform = (struct exynos_context *) kbdev->platform_context;
	if (ways == platform->llc_ways)
		return ret;

	if (ways > 0)
		ret = llc_region_alloc(LLC_REGION_GPU, 1, ways);
	else
		ret = llc_region_alloc(LLC_REGION_GPU, 0, 0);

	if (ret)
		GPU_LOG(DVFS_ERROR, DUMMY, 0u, 0u,
				"%s: failed to allocate llc: errno(%d)\n", __func__, ret);
	else {
		platform->llc_ways = ways;
		GPU_LOG(DVFS_DEBUG, DUMMY, 0u, 0u,
				"%s: llc set with way(%d) (1 way == 512 KB)\n", __func__, ways);
	}

	return ret;
}
#endif
