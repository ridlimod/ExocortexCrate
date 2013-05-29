#ifndef _UTILITY_H_
#define _UTILITY_H_

#include "CommonUtilities.h"

struct ArchiveInfo
{
   std::string path;

   bool bTimeSamplingInit;
   AbcA::TimeSampling timeSampling;

   ArchiveInfo(): bTimeSamplingInit(false)
   {}
};

XSI::CStatus alembicOp_Define( XSI::CRef& in_ctxt );
XSI::CStatus alembicOp_DefineLayout( XSI::CRef& in_ctxt );
XSI::CStatus alembicOp_Init( XSI::CRef& in_ctxt );
XSI::CStatus alembicOp_Term( XSI::CRef& in_ctxt );
XSI::CStatus alembicOp_PathEdit( XSI::CRef& in_ctxt, XSI::CString& path );
XSI::CStatus alembicOp_TimeSamplingInit( XSI::CRef& in_ctxt, AbcA::TimeSamplingPtr timeSampling );
XSI::CStatus alembicOp_getFrameNum( XSI::CRef& in_ctxt, double sampleTime, int& frameNum );

std::string getIdentifierFromRef(XSI::CRef in_Ref, bool includeHierarchy = false);
XSI::CString truncateName(const XSI::CString & in_Name);
XSI::CString stripNamespacePrefix(const XSI::CString& in_Name);
XSI::CString getFullNameFromIdentifier(XSI::CRef importRootNode, std::string in_Identifier, bool bMergedLeaf=true);
//XSI::CRef getRefFromIdentifier(XSI::CRef importRootNode, std::string in_Identifier, bool bMergedLeaf);
int getNodeDepthFromRef(XSI::CRef in_Ref);
XSI::CRefArray getOperators( XSI::CRef in_Ref);
bool isRefAnimated(const XSI::CRef & in_Ref, bool xformCache = false, bool globalSpace = false);
bool returnIsRefAnimated(const XSI::CRef & in_Ref, bool animated);
void clearIsRefAnimatedCache();
void updateOperatorInfo( XSI::Operator& op, SampleInfo& sampleInfo, AbcA::TimeSamplingPtr timeSamplingPtr, int nPointsPrimitive, int nPointsCache);

// remapping imported names
void nameMapAdd(XSI::CString identifier, XSI::CString name);
XSI::CString nameMapGet(XSI::CString identifier);
void nameMapClear();

bool hasStandinSupport();
XSI::CString getDSOPath();


#endif  // _FOUNDATION_H_
