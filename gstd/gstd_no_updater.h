/*
 * Gstreamer Daemon - Gst Launch under steroids
 * Copyright (C) 2017 RidgeRun Engineering <support@ridgerun.com>
 *
 * This file is part of Gstd.
 *
 * Gstd is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Gstd is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Gstd.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GSTD_NO_UPDATER_H__
#define __GSTD_NO_UPDATER_H__

#include <gst/gst.h>

#include "gstd_iupdater.h"

G_BEGIN_DECLS
/*
 * Type declaration.
 */
#define GSTD_TYPE_NO_UPDATER \
  (gstd_no_updater_get_type())
#define GSTD_NO_UPDATER(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj),GSTD_TYPE_NO_UPDATER,GstdNoUpdater))
#define GSTD_NO_UPDATER_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST((klass),GSTD_TYPE_NO_UPDATER,GstdNoUpdaterClass))
#define GSTD_IS_NO_UPDATER(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj),GSTD_TYPE_NO_UPDATER))
#define GSTD_IS_NO_UPDATER_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE((klass),GSTD_TYPE_NO_UPDATER))
#define GSTD_NO_UPDATER_GET_CLASS(obj) \
  (G_TYPE_INSTANCE_GET_CLASS ((obj), GSTD_TYPE_NO_UPDATER, GstdNoUpdaterClass))
typedef struct _GstdNoUpdater GstdNoUpdater;

GType gstd_no_updater_get_type ();

G_END_DECLS
#endif // __GSTD_NO_UPDATER_H__