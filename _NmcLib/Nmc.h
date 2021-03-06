#ifndef ETS_NMC_H
#define ETS_NMC_H

//-----------------------------------------------------------------------------
// 
// @doc
//
// @module	Nmc.h - Model compiler |
//
// This module contains the definition for the model compiler.
//
// Copyright (c) 2002-2003 - Edward T. Smith
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without 
// modification, are permitted provided that the following conditions are 
// met:
// 
// 1. Redistributions of source code must retain the above copyright notice, 
//    this list of conditions and the following disclaimer. 
// 2. Neither the name of Edward T. Smith nor the names of its contributors 
//    may be used to endorse or promote products derived from this software 
//    without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED 
// TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR 
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
// LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
// NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS 
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// @end
//
// $History: CnfMainWnd.h $
//      
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
//
// Required include files
//
//-----------------------------------------------------------------------------

#include "../_NwnLib/NwnDefines.h"
#include "../_NwnLib/NwnStreams.h"
#include "../_NwnLib/NwnMdlGeometry.h"
#include "../_NwnLib/NwnMdlNodes.h"
#include "../_NmcLib/NmcContext.h"
#include "../_NmcLib/NmcCache.h"

//-----------------------------------------------------------------------------
//
// Forward definitions
//
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
//
// Routines
//
//-----------------------------------------------------------------------------

//
// Compiler
//

void NmcParseModelFile (CNmcContext *pCtx);

//
// Controller and attribute routines
//

const char *NmcGetControllerName (int nController, UINT32 ulFlags);
bool NmcParseController (CNmcContext *pCtx, CNwnMdlNodeHeader *pNode);
bool NmcParseAttribute (CNmcContext *pCtx, CNwnMdlNodeHeader *pNode);

#endif // ETS_NMCMESH_H
