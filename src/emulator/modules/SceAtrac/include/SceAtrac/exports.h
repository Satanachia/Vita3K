// Vita3K emulator project
// Copyright (C) 2018 Vita3K team
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#pragma once

#include <module/module.h>

// SceAtrac
BRIDGE_DECL(sceAtracAddStreamData)
BRIDGE_DECL(sceAtracCreateDecoderGroup)
BRIDGE_DECL(sceAtracDecode)
BRIDGE_DECL(sceAtracDeleteDecoderGroup)
BRIDGE_DECL(sceAtracGetContentInfo)
BRIDGE_DECL(sceAtracGetDecoderGroupInfo)
BRIDGE_DECL(sceAtracGetDecoderStatus)
BRIDGE_DECL(sceAtracGetInternalError)
BRIDGE_DECL(sceAtracGetLoopInfo)
BRIDGE_DECL(sceAtracGetNextOutputPosition)
BRIDGE_DECL(sceAtracGetOutputSamples)
BRIDGE_DECL(sceAtracGetOutputableSamples)
BRIDGE_DECL(sceAtracGetRemainSamples)
BRIDGE_DECL(sceAtracGetStreamInfo)
BRIDGE_DECL(sceAtracGetSubBufferInfo)
BRIDGE_DECL(sceAtracGetVacantSize)
BRIDGE_DECL(sceAtracIsSubBufferNeeded)
BRIDGE_DECL(sceAtracQueryDecoderGroupMemSize)
BRIDGE_DECL(sceAtracReleaseHandle)
BRIDGE_DECL(sceAtracResetNextOutputPosition)
BRIDGE_DECL(sceAtracSetDataAndAcquireHandle)
BRIDGE_DECL(sceAtracSetLoopNum)
BRIDGE_DECL(sceAtracSetOutputSamples)
BRIDGE_DECL(sceAtracSetSubBuffer)
