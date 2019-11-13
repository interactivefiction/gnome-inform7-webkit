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

#ifndef WebKitDOMDOMSecurityPolicyPrivate_h
#define WebKitDOMDOMSecurityPolicyPrivate_h

#include "DOMSecurityPolicy.h"
#include <glib-object.h>
#include <webkit/WebKitDOMObject.h>
#if ENABLE(CSP_NEXT)

namespace WebKit {
WebKitDOMDOMSecurityPolicy* wrapDOMSecurityPolicy(WebCore::DOMSecurityPolicy*);
WebCore::DOMSecurityPolicy* core(WebKitDOMDOMSecurityPolicy* request);
WebKitDOMDOMSecurityPolicy* kit(WebCore::DOMSecurityPolicy* node);
} // namespace WebKit

#endif /* ENABLE(CSP_NEXT) */

#endif /* WebKitDOMDOMSecurityPolicyPrivate_h */
