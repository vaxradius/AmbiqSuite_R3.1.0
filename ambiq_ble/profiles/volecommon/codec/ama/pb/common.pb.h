//*****************************************************************************
//
//  common.pb.h
//! @file
//!
//! @brief Auto-generated (see below).
//!
//
//*****************************************************************************

//*****************************************************************************
//
// Copyright (c) 2023, Ambiq Micro, Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
// this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright
// notice, this list of conditions and the following disclaimer in the
// documentation and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its
// contributors may be used to endorse or promote products derived from this
// software without specific prior written permission.
//
// Third party software included in this distribution is subject to the
// additional license terms as defined in the /docs/licenses directory.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//
// This is part of revision release_sdk_3_1_0-255b3cac49 of the AmbiqSuite Development Package.
//
//*****************************************************************************
/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.1 at Fri Nov 09 16:58:28 2018. */

#ifndef PB_COMMON_PB_H_INCLUDED
#define PB_COMMON_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _Transport
{
    Transport_BLUETOOTH_LOW_ENERGY = 0,
    Transport_BLUETOOTH_RFCOMM = 1,
    Transport_BLUETOOTH_IAP = 2
} Transport;
#define _Transport_MIN Transport_BLUETOOTH_LOW_ENERGY
#define _Transport_MAX Transport_BLUETOOTH_IAP
#define _Transport_ARRAYSIZE ((Transport)(Transport_BLUETOOTH_IAP + 1))

typedef enum _ErrorCode
{
    ErrorCode_SUCCESS = 0,
    ErrorCode_UNKNOWN = 1,
    ErrorCode_INTERNAL = 2,
    ErrorCode_UNSUPPORTED = 3,
    ErrorCode_USER_CANCELLED = 4,
    ErrorCode_NOT_FOUND = 5,
    ErrorCode_INVALID = 6,
    ErrorCode_BUSY = 7
} ErrorCode;
#define _ErrorCode_MIN ErrorCode_SUCCESS
#define _ErrorCode_MAX ErrorCode_BUSY
#define _ErrorCode_ARRAYSIZE ((ErrorCode)(ErrorCode_BUSY + 1))

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
