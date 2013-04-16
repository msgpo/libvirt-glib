/*
 * libvirt-gconfig-domain-snapshot-disk.h: libvirt snapshot disk configuration
 *
 * Copyright (C) 2010-2013 Red Hat, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * Author: Christophe Fergeau <cfergeau@redhat.com>
 */

#if !defined(__LIBVIRT_GCONFIG_H__) && !defined(LIBVIRT_GCONFIG_BUILD)
#error "Only <libvirt-gconfig/libvirt-gconfig.h> can be included directly."
#endif

#ifndef __LIBVIRT_GCONFIG_DOMAIN_SNAPSHOT_DISK_H__
#define __LIBVIRT_GCONFIG_DOMAIN_SNAPSHOT_DISK_H__

G_BEGIN_DECLS

#define GVIR_CONFIG_TYPE_DOMAIN_SNAPSHOT_DISK            (gvir_config_domain_snapshot_disk_get_type ())
#define GVIR_CONFIG_DOMAIN_SNAPSHOT_DISK(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GVIR_CONFIG_TYPE_DOMAIN_SNAPSHOT_DISK, GVirConfigDomainSnapshotDisk))
#define GVIR_CONFIG_DOMAIN_SNAPSHOT_DISK_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), GVIR_CONFIG_TYPE_DOMAIN_SNAPSHOT_DISK, GVirConfigDomainSnapshotDiskClass))
#define GVIR_CONFIG_IS_DOMAIN_SNAPSHOT_DISK(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GVIR_CONFIG_TYPE_DOMAIN_SNAPSHOT_DISK))
#define GVIR_CONFIG_IS_DOMAIN_SNAPSHOT_DISK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GVIR_CONFIG_TYPE_DOMAIN_SNAPSHOT_DISK))
#define GVIR_CONFIG_DOMAIN_SNAPSHOT_DISK_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), GVIR_CONFIG_TYPE_DOMAIN_SNAPSHOT_DISK, GVirConfigDomainSnapshotDiskClass))

typedef struct _GVirConfigDomainSnapshotDisk GVirConfigDomainSnapshotDisk;
typedef struct _GVirConfigDomainSnapshotDiskPrivate GVirConfigDomainSnapshotDiskPrivate;
typedef struct _GVirConfigDomainSnapshotDiskClass GVirConfigDomainSnapshotDiskClass;

struct _GVirConfigDomainSnapshotDisk
{
    GVirConfigObject parent;

    GVirConfigDomainSnapshotDiskPrivate *priv;

    /* Do not add fields to this struct */
};

struct _GVirConfigDomainSnapshotDiskClass
{
    GVirConfigObjectClass parent_class;

    gpointer padding[20];
};


GType gvir_config_domain_snapshot_disk_get_type(void);

GVirConfigDomainSnapshotDisk *gvir_config_domain_snapshot_disk_new(void);
GVirConfigDomainSnapshotDisk *gvir_config_domain_snapshot_disk_new_from_xml(const gchar *xml,
                                                                            GError **error);

G_END_DECLS

#endif /* __LIBVIRT_GCONFIG_DOMAIN_SNAPSHOT_DISK_H__ */