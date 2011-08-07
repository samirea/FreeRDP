/**
 * FreeRDP: A Remote Desktop Protocol Client
 * X11 Client
 *
 * Copyright 2011 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __XFREERDP_H
#define __XFREERDP_H

#include "gdi.h"
#include <freerdp/freerdp.h>
#include <freerdp/chanman.h>

#define SET_XFI(_instance, _xfi) (_instance)->param1 = _xfi
#define GET_XFI(_instance) ((xfInfo*) ((_instance)->param1))

#define SET_CHANMAN(_instance, _chanman) (_instance)->param2 = _chanman
#define GET_CHANMAN(_instance) ((rdpChanMan*) ((_instance)->param2))

struct xf_info
{

};
typedef struct xf_info xfInfo;

#endif /* __XFREERDP_H */