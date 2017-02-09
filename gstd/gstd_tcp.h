/*
 * Gstreamer Daemon - Gst Launch under steroids
 * Copyright (C) 2015 RidgeRun Engineering <support@ridgerun.com>
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
#ifndef __GSTD_TCP_H__
#define __GSTD_TCP_H__

#include <gio/gio.h>
#include <gstd/gstd_return_codes.h>
#include <gstd/gstd_session.h>
#include "gstd_ipc.h"

G_BEGIN_DECLS

#define GSTD_TCP_DEFAULT_PORT 5000

#define GSTD_TYPE_TCP \
  (gstd_tcp_get_type())
#define GSTD_TCP(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj),GSTD_TYPE_TCP,GstdTcp))
#define GSTD_TCP_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST((klass),GSTD_TYPE_TCP,GstdTcpClass))
#define GSTD_IS_TCP(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj),GSTD_TYPE_TCP))
#define GSTD_IS_TCP_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE((klass),GSTD_TYPE_TCP))
#define GSTD_TCP_GET_CLASS(obj) \
  (G_TYPE_INSTANCE_GET_CLASS ((obj), GSTD_TYPE_TPC, GstdTcpClass))


typedef struct _GstdTcp GstdTcp;
typedef struct _GstdTcpClass GstdTcpClass;
GType gstd_tcp_get_type();


GstdReturnCode
gstd_tcp_start (GstdIpc *base, GstdSession *session);

GstdReturnCode
gstd_tcp_stop (GstdIpc *base);


G_END_DECLS

#endif //__GSTD_TCP_H__
