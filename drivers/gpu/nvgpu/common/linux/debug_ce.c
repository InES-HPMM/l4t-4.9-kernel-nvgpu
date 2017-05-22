/*
 * Copyright (C) 2017 NVIDIA Corporation.  All rights reserved.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include "debug_ce.h"
#include "gk20a/platform_gk20a.h"

#include <linux/debugfs.h>

void gk20a_ce_debugfs_init(struct gk20a *g)
{
	struct gk20a_platform *platform = dev_get_drvdata(g->dev);

	debugfs_create_u32("ce_app_ctx_count", S_IWUSR | S_IRUGO,
			   platform->debugfs, &g->ce_app.ctx_count);
	debugfs_create_u32("ce_app_state", S_IWUSR | S_IRUGO,
			   platform->debugfs, &g->ce_app.app_state);
	debugfs_create_u32("ce_app_next_ctx_id", S_IWUSR | S_IRUGO,
			   platform->debugfs, &g->ce_app.next_ctx_id);
}