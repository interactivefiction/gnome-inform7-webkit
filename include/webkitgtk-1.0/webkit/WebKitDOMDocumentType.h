/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef WebKitDOMDocumentType_h
#define WebKitDOMDocumentType_h

#include <glib-object.h>
#include <webkit/WebKitDOMNode.h>
#include <webkit/webkitdefines.h>
#include <webkit/webkitdomdefines.h>

G_BEGIN_DECLS
#define WEBKIT_TYPE_DOM_DOCUMENT_TYPE            (webkit_dom_document_type_get_type())
#define WEBKIT_DOM_DOCUMENT_TYPE(obj)            (G_TYPE_CHECK_INSTANCE_CAST((obj), WEBKIT_TYPE_DOM_DOCUMENT_TYPE, WebKitDOMDocumentType))
#define WEBKIT_DOM_DOCUMENT_TYPE_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST((klass),  WEBKIT_TYPE_DOM_DOCUMENT_TYPE, WebKitDOMDocumentTypeClass)
#define WEBKIT_DOM_IS_DOCUMENT_TYPE(obj)         (G_TYPE_CHECK_INSTANCE_TYPE((obj), WEBKIT_TYPE_DOM_DOCUMENT_TYPE))
#define WEBKIT_DOM_IS_DOCUMENT_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE((klass),  WEBKIT_TYPE_DOM_DOCUMENT_TYPE))
#define WEBKIT_DOM_DOCUMENT_TYPE_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS((obj),  WEBKIT_TYPE_DOM_DOCUMENT_TYPE, WebKitDOMDocumentTypeClass))

struct _WebKitDOMDocumentType {
    WebKitDOMNode parent_instance;
};

struct _WebKitDOMDocumentTypeClass {
    WebKitDOMNodeClass parent_class;
};

WEBKIT_API GType
webkit_dom_document_type_get_type (void);

/**
 * webkit_dom_document_type_get_name:
 * @self: A #WebKitDOMDocumentType
 *
 * Returns:
 *
**/
WEBKIT_API gchar*
webkit_dom_document_type_get_name(WebKitDOMDocumentType* self);

/**
 * webkit_dom_document_type_get_entities:
 * @self: A #WebKitDOMDocumentType
 *
 * Returns: (transfer none):
 *
**/
WEBKIT_API WebKitDOMNamedNodeMap*
webkit_dom_document_type_get_entities(WebKitDOMDocumentType* self);

/**
 * webkit_dom_document_type_get_notations:
 * @self: A #WebKitDOMDocumentType
 *
 * Returns: (transfer none):
 *
**/
WEBKIT_API WebKitDOMNamedNodeMap*
webkit_dom_document_type_get_notations(WebKitDOMDocumentType* self);

/**
 * webkit_dom_document_type_get_public_id:
 * @self: A #WebKitDOMDocumentType
 *
 * Returns:
 *
**/
WEBKIT_API gchar*
webkit_dom_document_type_get_public_id(WebKitDOMDocumentType* self);

/**
 * webkit_dom_document_type_get_system_id:
 * @self: A #WebKitDOMDocumentType
 *
 * Returns:
 *
**/
WEBKIT_API gchar*
webkit_dom_document_type_get_system_id(WebKitDOMDocumentType* self);

/**
 * webkit_dom_document_type_get_internal_subset:
 * @self: A #WebKitDOMDocumentType
 *
 * Returns:
 *
**/
WEBKIT_API gchar*
webkit_dom_document_type_get_internal_subset(WebKitDOMDocumentType* self);

G_END_DECLS

#endif /* WebKitDOMDocumentType_h */
