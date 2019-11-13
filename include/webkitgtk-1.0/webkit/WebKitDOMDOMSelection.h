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

#ifndef WebKitDOMDOMSelection_h
#define WebKitDOMDOMSelection_h

#include <glib-object.h>
#include <webkit/WebKitDOMObject.h>
#include <webkit/webkitdefines.h>
#include <webkit/webkitdomdefines.h>

G_BEGIN_DECLS
#define WEBKIT_TYPE_DOM_DOM_SELECTION            (webkit_dom_dom_selection_get_type())
#define WEBKIT_DOM_DOM_SELECTION(obj)            (G_TYPE_CHECK_INSTANCE_CAST((obj), WEBKIT_TYPE_DOM_DOM_SELECTION, WebKitDOMDOMSelection))
#define WEBKIT_DOM_DOM_SELECTION_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST((klass),  WEBKIT_TYPE_DOM_DOM_SELECTION, WebKitDOMDOMSelectionClass)
#define WEBKIT_DOM_IS_DOM_SELECTION(obj)         (G_TYPE_CHECK_INSTANCE_TYPE((obj), WEBKIT_TYPE_DOM_DOM_SELECTION))
#define WEBKIT_DOM_IS_DOM_SELECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE((klass),  WEBKIT_TYPE_DOM_DOM_SELECTION))
#define WEBKIT_DOM_DOM_SELECTION_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS((obj),  WEBKIT_TYPE_DOM_DOM_SELECTION, WebKitDOMDOMSelectionClass))

struct _WebKitDOMDOMSelection {
    WebKitDOMObject parent_instance;
};

struct _WebKitDOMDOMSelectionClass {
    WebKitDOMObjectClass parent_class;
};

WEBKIT_API GType
webkit_dom_dom_selection_get_type (void);

/**
 * webkit_dom_dom_selection_collapse:
 * @self: A #WebKitDOMDOMSelection
 * @node: A #WebKitDOMNode
 * @index: A #glong
 * @error: #GError
 *
 * Returns:
 *
**/
WEBKIT_API void
webkit_dom_dom_selection_collapse(WebKitDOMDOMSelection* self, WebKitDOMNode* node, glong index, GError** error);

/**
 * webkit_dom_dom_selection_collapse_to_end:
 * @self: A #WebKitDOMDOMSelection
 * @error: #GError
 *
 * Returns:
 *
**/
WEBKIT_API void
webkit_dom_dom_selection_collapse_to_end(WebKitDOMDOMSelection* self, GError** error);

/**
 * webkit_dom_dom_selection_collapse_to_start:
 * @self: A #WebKitDOMDOMSelection
 * @error: #GError
 *
 * Returns:
 *
**/
WEBKIT_API void
webkit_dom_dom_selection_collapse_to_start(WebKitDOMDOMSelection* self, GError** error);

/**
 * webkit_dom_dom_selection_delete_from_document:
 * @self: A #WebKitDOMDOMSelection
 *
 * Returns:
 *
**/
WEBKIT_API void
webkit_dom_dom_selection_delete_from_document(WebKitDOMDOMSelection* self);

/**
 * webkit_dom_dom_selection_contains_node:
 * @self: A #WebKitDOMDOMSelection
 * @node: A #WebKitDOMNode
 * @allowPartial: A #gboolean
 *
 * Returns:
 *
**/
WEBKIT_API gboolean
webkit_dom_dom_selection_contains_node(WebKitDOMDOMSelection* self, WebKitDOMNode* node, gboolean allowPartial);

/**
 * webkit_dom_dom_selection_select_all_children:
 * @self: A #WebKitDOMDOMSelection
 * @node: A #WebKitDOMNode
 * @error: #GError
 *
 * Returns:
 *
**/
WEBKIT_API void
webkit_dom_dom_selection_select_all_children(WebKitDOMDOMSelection* self, WebKitDOMNode* node, GError** error);

/**
 * webkit_dom_dom_selection_extend:
 * @self: A #WebKitDOMDOMSelection
 * @node: A #WebKitDOMNode
 * @offset: A #glong
 * @error: #GError
 *
 * Returns:
 *
**/
WEBKIT_API void
webkit_dom_dom_selection_extend(WebKitDOMDOMSelection* self, WebKitDOMNode* node, glong offset, GError** error);

/**
 * webkit_dom_dom_selection_get_range_at:
 * @self: A #WebKitDOMDOMSelection
 * @index: A #glong
 * @error: #GError
 *
 * Returns: (transfer none):
 *
**/
WEBKIT_API WebKitDOMRange*
webkit_dom_dom_selection_get_range_at(WebKitDOMDOMSelection* self, glong index, GError** error);

/**
 * webkit_dom_dom_selection_remove_all_ranges:
 * @self: A #WebKitDOMDOMSelection
 *
 * Returns:
 *
**/
WEBKIT_API void
webkit_dom_dom_selection_remove_all_ranges(WebKitDOMDOMSelection* self);

/**
 * webkit_dom_dom_selection_add_range:
 * @self: A #WebKitDOMDOMSelection
 * @range: A #WebKitDOMRange
 *
 * Returns:
 *
**/
WEBKIT_API void
webkit_dom_dom_selection_add_range(WebKitDOMDOMSelection* self, WebKitDOMRange* range);

/**
 * webkit_dom_dom_selection_modify:
 * @self: A #WebKitDOMDOMSelection
 * @alter: A #gchar
 * @direction: A #gchar
 * @granularity: A #gchar
 *
 * Returns:
 *
**/
WEBKIT_API void
webkit_dom_dom_selection_modify(WebKitDOMDOMSelection* self, const gchar* alter, const gchar* direction, const gchar* granularity);

/**
 * webkit_dom_dom_selection_set_base_and_extent:
 * @self: A #WebKitDOMDOMSelection
 * @baseNode: A #WebKitDOMNode
 * @baseOffset: A #glong
 * @extentNode: A #WebKitDOMNode
 * @extentOffset: A #glong
 * @error: #GError
 *
 * Returns:
 *
**/
WEBKIT_API void
webkit_dom_dom_selection_set_base_and_extent(WebKitDOMDOMSelection* self, WebKitDOMNode* baseNode, glong baseOffset, WebKitDOMNode* extentNode, glong extentOffset, GError** error);

/**
 * webkit_dom_dom_selection_set_position:
 * @self: A #WebKitDOMDOMSelection
 * @node: A #WebKitDOMNode
 * @offset: A #glong
 * @error: #GError
 *
 * Returns:
 *
**/
WEBKIT_API void
webkit_dom_dom_selection_set_position(WebKitDOMDOMSelection* self, WebKitDOMNode* node, glong offset, GError** error);

/**
 * webkit_dom_dom_selection_empty:
 * @self: A #WebKitDOMDOMSelection
 *
 * Returns:
 *
**/
WEBKIT_API void
webkit_dom_dom_selection_empty(WebKitDOMDOMSelection* self);

/**
 * webkit_dom_dom_selection_get_anchor_node:
 * @self: A #WebKitDOMDOMSelection
 *
 * Returns: (transfer none):
 *
**/
WEBKIT_API WebKitDOMNode*
webkit_dom_dom_selection_get_anchor_node(WebKitDOMDOMSelection* self);

/**
 * webkit_dom_dom_selection_get_anchor_offset:
 * @self: A #WebKitDOMDOMSelection
 *
 * Returns:
 *
**/
WEBKIT_API glong
webkit_dom_dom_selection_get_anchor_offset(WebKitDOMDOMSelection* self);

/**
 * webkit_dom_dom_selection_get_focus_node:
 * @self: A #WebKitDOMDOMSelection
 *
 * Returns: (transfer none):
 *
**/
WEBKIT_API WebKitDOMNode*
webkit_dom_dom_selection_get_focus_node(WebKitDOMDOMSelection* self);

/**
 * webkit_dom_dom_selection_get_focus_offset:
 * @self: A #WebKitDOMDOMSelection
 *
 * Returns:
 *
**/
WEBKIT_API glong
webkit_dom_dom_selection_get_focus_offset(WebKitDOMDOMSelection* self);

/**
 * webkit_dom_dom_selection_get_is_collapsed:
 * @self: A #WebKitDOMDOMSelection
 *
 * Returns:
 *
**/
WEBKIT_API gboolean
webkit_dom_dom_selection_get_is_collapsed(WebKitDOMDOMSelection* self);

/**
 * webkit_dom_dom_selection_get_range_count:
 * @self: A #WebKitDOMDOMSelection
 *
 * Returns:
 *
**/
WEBKIT_API glong
webkit_dom_dom_selection_get_range_count(WebKitDOMDOMSelection* self);

/**
 * webkit_dom_dom_selection_get_base_node:
 * @self: A #WebKitDOMDOMSelection
 *
 * Returns: (transfer none):
 *
**/
WEBKIT_API WebKitDOMNode*
webkit_dom_dom_selection_get_base_node(WebKitDOMDOMSelection* self);

/**
 * webkit_dom_dom_selection_get_base_offset:
 * @self: A #WebKitDOMDOMSelection
 *
 * Returns:
 *
**/
WEBKIT_API glong
webkit_dom_dom_selection_get_base_offset(WebKitDOMDOMSelection* self);

/**
 * webkit_dom_dom_selection_get_extent_node:
 * @self: A #WebKitDOMDOMSelection
 *
 * Returns: (transfer none):
 *
**/
WEBKIT_API WebKitDOMNode*
webkit_dom_dom_selection_get_extent_node(WebKitDOMDOMSelection* self);

/**
 * webkit_dom_dom_selection_get_extent_offset:
 * @self: A #WebKitDOMDOMSelection
 *
 * Returns:
 *
**/
WEBKIT_API glong
webkit_dom_dom_selection_get_extent_offset(WebKitDOMDOMSelection* self);

G_END_DECLS

#endif /* WebKitDOMDOMSelection_h */
