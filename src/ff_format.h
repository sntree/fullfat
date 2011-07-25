/*****************************************************************************
 *  FullFAT - High Performance, Thread-Safe Embedded FAT File-System         *
 *                                                                           *
 *  Copyright(C) 2009 James Walmsley  (james@fullfat-fs.co.uk)               *
 *	Copyright(C) 2010 Hein Tibosch    (hein_tibosch@yahoo.es)                *
 *                                                                           *
 *  See RESTRICTIONS.TXT for extra restrictions on the use of FullFAT.       *
 *                                                                           *
 *  Removing this notice is illegal and will invalidate this license.        *
 *****************************************************************************
 *  See http://www.fullfat-fs.co.uk/ for more information.                   *
 *  Or  http://fullfat.googlecode.com/ for latest releases and the wiki.     *
 *****************************************************************************
 * As of 19-July-2011 FullFAT has abandoned the GNU GPL License in favour of *
 * the more flexible Apache 2.0 license. See License.txt for full terms.     *
 *                                                                           *
 *            YOU ARE FREE TO USE FULLFAT IN COMMERCIAL PROJECTS             *
 *****************************************************************************/

/**
 *	@file		ff_format.c
 *	@author		James Walmsley
 *	@ingroup	FORMAT
 *	
 **/


#ifndef _FF_FORMAT_H_
#define _FF_FORMAT_H_

#ifdef	__cplusplus
extern "C" {
#endif


#include "ff_config.h"
#include "ff_types.h"
#include "ff_ioman.h"
#include "ff_dir.h"
#include "ff_format.h"

//---------- PROTOTYPES
// PUBLIC (Interfaces):

//FF_ERROR FF_Format (FF_IOMAN *pIoman, FF_T_UINT32 SectorCount, FF_T_BOOL TryFat16);
FF_ERROR FF_Format(FF_IOMAN *pIoman, FF_T_UINT32 ulStartLBA, FF_T_UINT32 ulEndLBA, FF_T_UINT32 ulClusterSize);

// Private :

#ifdef	__cplusplus
} // extern "C"
#endif

#endif
