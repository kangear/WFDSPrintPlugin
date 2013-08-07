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
#ifndef __WTYPES_H__
#define __WTYPES_H__

#include <stddef.h>
#include <stdbool.h>

#define OK                       0
#define ERROR                    -1
#define CANCELLED                2
#define CORRUPT                  3

#ifndef MIN
#define MIN(x,y)  (((x) < (y)) ? (x) : (y))
#endif

#ifndef MAX
#define MAX(x,y)  (((x) > (y)) ? (x) : (y))
#endif

#define IMPL(class, member, pointer) \
     ( (class *)( ((uint32)pointer) - offsetof(class, member) ) )

typedef unsigned char      ubyte;          /* unsigned byte: 0..255           */
typedef signed char        sbyte;          /* signed byte: -128..127          */
typedef unsigned char      uint8;
typedef signed char        sint8;
typedef unsigned short     uint16;
typedef signed short       sint16;
typedef signed long        sint32;
typedef unsigned long      uint32;
typedef unsigned long long uint64;
typedef float              float32;        /* 32 bit floating point           */
typedef double             float64;        /* 64 bit floating point           */

typedef unsigned long wStatus_t;
typedef unsigned long wJob_t;

#endif  /*  __WTYPES_H__  */

