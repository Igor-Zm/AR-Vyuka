#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 UnityEngine.XR.ARFoundation.ARSessionOrigin Needle.XR.ARSimulation.RayHelper::get_Origin()
extern void RayHelper_get_Origin_m277ABBCD58E57344323D3F2EFA9CC46D4944355F (void);
// 0x00000002 UnityEngine.Transform Needle.XR.ARSimulation.RayHelper::get_SessionSpace()
extern void RayHelper_get_SessionSpace_m06FA72A20C835DB31D8C55B21790084246DAEE85 (void);
// 0x00000003 UnityEngine.Ray Needle.XR.ARSimulation.RayHelper::ToSessionSpace(UnityEngine.Vector3,UnityEngine.Vector3)
extern void RayHelper_ToSessionSpace_mE192F336DD82CDB80DD3713A56563CB36F7715F9 (void);
// 0x00000004 UnityEngine.Ray Needle.XR.ARSimulation.RayHelper::ToWorld(UnityEngine.Ray)
extern void RayHelper_ToWorld_m1B51E88EF49194881A8CAB51AFD88CBED9178D1B (void);
// 0x00000005 UnityEngine.XR.ARFoundation.ARSessionOrigin Needle.XR.ARSimulation.Utilities.PlacementHelper::get_sessionOrigin()
extern void PlacementHelper_get_sessionOrigin_mD6EB38014CD39C8663E61ED9B7E3B0A2146782A0 (void);
// 0x00000006 UnityEngine.Camera Needle.XR.ARSimulation.Utilities.PlacementHelper::get_ARCamera()
extern void PlacementHelper_get_ARCamera_mA9C754758A706EA8B25C42F9E6A759943F81FF4B (void);
// 0x00000007 System.Boolean Needle.XR.ARSimulation.Utilities.PlacementHelper::IsTrackable(UnityEngine.Transform)
extern void PlacementHelper_IsTrackable_mB439B061722E3AB5102A481022424EDC946DBEFF (void);
// 0x00000008 UnityEngine.Vector3 Needle.XR.ARSimulation.Utilities.PlacementHelper::GetRayDirection(UnityEngine.XR.ARFoundation.ARRaycastHit,UnityEngine.XR.ARFoundation.ARSessionOrigin)
extern void PlacementHelper_GetRayDirection_m3633ED69A3FA55136D9594039A8736C73B1A1208 (void);
// 0x00000009 UnityEngine.Vector3 Needle.XR.ARSimulation.Utilities.PlacementHelper::GetRayVector(UnityEngine.XR.ARFoundation.ARRaycastHit,UnityEngine.XR.ARFoundation.ARSessionOrigin)
extern void PlacementHelper_GetRayVector_m56D31A1564BEFE61EF79DD01128A5EBDFFA71634 (void);
static Il2CppMethodPointer s_methodPointers[9] = 
{
	RayHelper_get_Origin_m277ABBCD58E57344323D3F2EFA9CC46D4944355F,
	RayHelper_get_SessionSpace_m06FA72A20C835DB31D8C55B21790084246DAEE85,
	RayHelper_ToSessionSpace_mE192F336DD82CDB80DD3713A56563CB36F7715F9,
	RayHelper_ToWorld_m1B51E88EF49194881A8CAB51AFD88CBED9178D1B,
	PlacementHelper_get_sessionOrigin_mD6EB38014CD39C8663E61ED9B7E3B0A2146782A0,
	PlacementHelper_get_ARCamera_mA9C754758A706EA8B25C42F9E6A759943F81FF4B,
	PlacementHelper_IsTrackable_mB439B061722E3AB5102A481022424EDC946DBEFF,
	PlacementHelper_GetRayDirection_m3633ED69A3FA55136D9594039A8736C73B1A1208,
	PlacementHelper_GetRayVector_m56D31A1564BEFE61EF79DD01128A5EBDFFA71634,
};
static const int32_t s_InvokerIndices[9] = 
{
	12323,
	12323,
	9673,
	11414,
	12323,
	12323,
	11447,
	10009,
	10009,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Needle_XR_ARSimulation_Utilities_CodeGenModule;
const Il2CppCodeGenModule g_Needle_XR_ARSimulation_Utilities_CodeGenModule = 
{
	"Needle.XR.ARSimulation.Utilities.dll",
	9,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
