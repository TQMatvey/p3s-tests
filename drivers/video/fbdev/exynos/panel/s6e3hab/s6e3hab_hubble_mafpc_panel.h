/*
 * linux/drivers/video/fbdev/exynos/panel/s6e3hab/s6e3hab_hubble_mafpc_panel.h
 *
 * Header file for mAFPC Driver
 *
 * Copyright (c) 2020 Samsung Electronics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __S6E3HAB_HUBBLE_MAFPC_PANEL_H__
#define __S6E3HAB_HUBBLE_MAFPC_PANEL_H__

#include "s6e3hab_hubble_mafpc_data.h"

char S6E3HAB_HUBBLE_MAFPC_DEFAULT_SCALE_FACTOR[225] = {
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF,
};


static u8 s6e3hab_hubble_mafpc_crc_value[] = {
	0x5C, 0xE5
};

static struct mafpc_info s6e3hab_hubble_mafpc = {
	.name = "s6e3hab_hubble_mafpc",
	.abc_img = S6E3HAB_HUBBLE_MAFPC_DEFAULT_IMG,
	.abc_img_len = ARRAY_SIZE(S6E3HAB_HUBBLE_MAFPC_DEFAULT_IMG),
	.abc_scale_factor = S6E3HAB_HUBBLE_MAFPC_DEFAULT_SCALE_FACTOR,
	.abc_scale_factor_len = ARRAY_SIZE(S6E3HAB_HUBBLE_MAFPC_DEFAULT_SCALE_FACTOR),
	.abc_crc = s6e3hab_hubble_mafpc_crc_value,
	.abc_crc_len = ARRAY_SIZE(s6e3hab_hubble_mafpc_crc_value),
	.abc_ctrl_cmd_len = 39,
};

#endif

