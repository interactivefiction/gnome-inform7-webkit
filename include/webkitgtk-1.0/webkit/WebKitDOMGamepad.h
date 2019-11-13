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

#ifndef WebKitDOMGamepad_h
#define WebKitDOMGamepad_h

#include <glib-object.h>
#include <webkit/WebKitDOMObject.h>
#include <webkit/webkitdefines.h>
#include <webkit/webkitdomdefines.h>

G_BEGIN_DECLS
#define WEBKIT_TYPE_DOM_GAMEPAD            (webkit_dom_gamepad_get_type())
#define WEBKIT_DOM_GAMEPAD(obj)            (G_TYPE_CHECK_INSTANCE_CAST((obj), WEBKIT_TYPE_DOM_GAMEPAD, WebKitDOMGamepad))
#define WEBKIT_DOM_GAMEPAD_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST((klass),  WEBKIT_TYPE_DOM_GAMEPAD, WebKitDOMGamepadClass)
#define WEBKIT_DOM_IS_GAMEPAD(obj)         (G_TYPE_CHECK_INSTANCE_TYPE((obj), WEBKIT_TYPE_DOM_GAMEPAD))
#define WEBKIT_DOM_IS_GAMEPAD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE((klass),  WEBKIT_TYPE_DOM_GAMEPAD))
#define WEBKIT_DOM_GAMEPAD_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS((obj),  WEBKIT_TYPE_DOM_GAMEPAD, WebKitDOMGamepadClass))

struct _WebKitDOMGamepad {
    WebKitDOMObject parent_instance;
};

struct _WebKitDOMGamepadClass {
    WebKitDOMObjectClass parent_class;
};

WEBKIT_API GType
webkit_dom_gamepad_get_type (void);

/**
 * webkit_dom_gamepad_get_id:
 * @self: A #WebKitDOMGamepad
 *
 * Returns:
 *
**/
WEBKIT_API gchar*
webkit_dom_gamepad_get_id(WebKitDOMGamepad* self);

/**
 * webkit_dom_gamepad_get_index:
 * @self: A #WebKitDOMGamepad
 *
 * Returns:
 *
**/
WEBKIT_API gulong
webkit_dom_gamepad_get_index(WebKitDOMGamepad* self);

/**
 * webkit_dom_gamepad_get_timestamp:
 * @self: A #WebKitDOMGamepad
 *
 * Returns:
 *
**/
WEBKIT_API guint64
webkit_dom_gamepad_get_timestamp(WebKitDOMGamepad* self);

G_END_DECLS

#endif /* WebKitDOMGamepad_h */
