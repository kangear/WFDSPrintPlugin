/*
(c) Copyright 2013 Hewlett-Packard Development Company, L.P.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
#ifndef __IPP_STATUS_CAPABILITIES_H__
#define __IPP_STATUS_CAPABILITIES_H__

/*
 * Include necessary headers...
 */
#include "ifc_printer_capabilities.h"
#include "ifc_wprint.h"

/*
 * C++ magic...
 */

#  ifdef __cplusplus
extern "C" {
#  endif /* __cplusplus */

extern const ifc_printer_capabilities_t *ipp_status_get_capabilities_ifc(const ifc_wprint_t *wprint_ifc);
/*
 * C++ magic...
 */

#  ifdef __cplusplus
}
#  endif /* __cplusplus */
#endif /* !__IPP_STATUS_CAPABILITIES_H__ */
