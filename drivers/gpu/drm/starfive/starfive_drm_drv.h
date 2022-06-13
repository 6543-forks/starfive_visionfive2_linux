/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2021 StarFive Technology Co., Ltd
 * Author: StarFive <StarFive@starfivetech.com>
 *
 */

#ifndef _STARFIVE_DRM_DRV_H
#define _STARFIVE_DRM_DRV_H

#include <drm/drm_fb_helper.h>
#include <drm/drm_atomic_helper.h>
#include <drm/drm_gem.h>

#include <linux/module.h>
#include <linux/component.h>

// #define USE_OLD_SCREEN  1

struct starfive_drm_private {
	struct drm_fb_helper fbdev_helper;
	struct drm_gem_object *fbdev_bo;
	struct mutex mm_lock;
	struct drm_mm mm;
};

extern struct platform_driver starfive_crtc_driver;
extern struct platform_driver starfive_encoder_driver;
extern struct platform_driver starfive_dsi_platform_driver;
extern int init_seeed_panel(void);
extern void exit_seeed_panel(void);

#endif /* _STARFIVE_DRM_DRV_H_ */
