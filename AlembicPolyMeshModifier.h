/**********************************************************************
 *<
	FILE: Convert.h

	DESCRIPTION: Convert To type modifiers

	CREATED BY: Steve Anderson

	HISTORY:

 *>	Copyright (c) 2000, All Rights Reserved.
 **********************************************************************/

#ifndef __ALEMBIC_POLYMESH_MODIFIER__H
#define __ALEMBIC_POLYMESH_MODIFIER__H

#include "Foundation.h"
#include "MNMath.h"
#include "PolyObj.h"
#include "resource.h"
#include "surf_api.h"
#include <string>
#include "AlembicDefinitions.h"

// can be generated via gencid.exe in the help folder of the 3DS Max.
#define EXOCORTEX_ALEMBIC_POLYMESH_MODIFIER_ID	Class_ID(0x45365012, 0x60984267)

#define REF_PBLOCK 0

TCHAR *GetString(int id);

extern ClassDesc *GetAlembicPolyMeshModifierDesc();

// Alembic data fill flags specific to polymesh
const unsigned int ALEMBIC_DATAFILL_POLYMESH_IMPORT = ALEMBIC_DATAFILL_VERTEX_IMPORT|ALEMBIC_DATAFILL_FACELIST;
const unsigned int ALEMBIC_DATAFILL_POLYMESH_UPDATE = ALEMBIC_DATAFILL_VERTEX_UPDATE;

// Alembic Functions
typedef struct _alembic_importoptions alembic_importoptions;
extern int AlembicImport_PolyMesh(const std::string &file, const std::string &identifier, alembic_importoptions options);

extern HINSTANCE hInstance;


#endif	// __ALEMBIC_POLYMESH_MODIFIER__H