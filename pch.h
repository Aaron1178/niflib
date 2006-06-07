//Headers to pre-compile

#include "NIF_IO.h"
#include "nif_math.h"
#include "niflib.h"
#include "Ref.h"
#include "Type.h"

#include "gen/AVObject.h"
#include "gen/Bones.h"
#include "gen/BoundingBox.h"
#include "gen/ByteArray.h"
#include "gen/ControllerLink.h"
#include "gen/Footer.h"
#include "gen/FurniturePosition.h"
#include "gen/Header.h"
#include "gen/hkTriangle.h"
#include "gen/KeyGroup.h"
#include "gen/LimitedHingeDescriptor.h"
#include "gen/LODRange.h"
#include "gen/MatchGroup.h"
#include "gen/MipMap.h"
#include "gen/Morph.h"
#include "gen/NodeGroup.h"
#include "gen/obj_defines.h"
#include "gen/Particle.h"
#include "gen/QuaternionXYZW.h"
#include "gen/RagDollDescriptor.h"
#include "gen/RotationKeyArray.h"
#include "gen/ShaderTexDesc.h"
#include "gen/ShortString.h"
#include "gen/SkinData.h"
#include "gen/SkinPartition.h"
#include "gen/SkinShape.h"
#include "gen/SkinShapeGroup.h"
#include "gen/SkinWeight.h"
#include "gen/StringPalette.h"
#include "gen/TBC.h"
#include "gen/TexDesc.h"
#include "gen/TexSource.h"

#include "obj/AbhkConstraint.h"
#include "obj/AbhkRagdollConstraint.h"
#include "obj/AbhkShapeCollection.h"
#include "obj/ABoneLODController.h"
#include "obj/AKeyedData.h"
#include "obj/AParticleModifier.h"
#include "obj/APSysCtlr.h"
#include "obj/APSysData.h"
#include "obj/AvoidNode.h"
#include "obj/bhkBlendCollisionObject.h"
#include "obj/bhkBlendController.h"
#include "obj/bhkBoxShape.h"
#include "obj/bhkCapsuleShape.h"
#include "obj/bhkCollisionObject.h"
#include "obj/bhkConvexShape.h"
#include "obj/bhkConvexTransformShape.h"
#include "obj/bhkConvexVerticesShape.h"
#include "obj/bhkEntity.h"
#include "obj/bhkHingeConstraint.h"
#include "obj/bhkLimitedHingeConstraint.h"
#include "obj/bhkListShape.h"
#include "obj/bhkMalleableConstraint.h"
#include "obj/bhkMoppBvTreeShape.h"
#include "obj/bhkMultiSphereShape.h"
#include "obj/bhkNiTriStripsShape.h"
#include "obj/bhkPackedNiTriStripsShape.h"
#include "obj/bhkPrismaticConstraint.h"
#include "obj/bhkRagdollConstraint.h"
#include "obj/bhkRefObject.h"
#include "obj/bhkRigidBody.h"
#include "obj/bhkRigidBodyT.h"
#include "obj/bhkSerializable.h"
#include "obj/bhkShape.h"
#include "obj/bhkSimpleShapePhantom.h"
#include "obj/bhkSPCollisionObject.h"
#include "obj/bhkSphereRepShape.h"
#include "obj/bhkSphereShape.h"
#include "obj/bhkStiffSpringConstraint.h"
#include "obj/bhkTransformShape.h"
#include "obj/bhkWorldObject.h"
#include "obj/BSBound.h"
#include "obj/BSFurnitureMarker.h"
#include "obj/BSKeyframeController.h"
#include "obj/BSParentVelocityModifier.h"
#include "obj/BSPSysArrayEmitter.h"
#include "obj/BSXFlags.h"
#include "obj/FxButton.h"
#include "obj/FxRadioButton.h"
#include "obj/FxWidget.h"
#include "obj/hkPackedNiTriStripsData.h"
#include "obj/NiAlphaController.h"
#include "obj/NiAlphaProperty.h"
#include "obj/NiAmbientLight.h"
#include "obj/NiAutoNormalParticles.h"
#include "obj/NiAutoNormalParticlesData.h"
#include "obj/NiAVObject.h"
#include "obj/NiBillboardNode.h"
#include "obj/NiBinaryExtraData.h"
#include "obj/NiBlendBoolInterpolator.h"
#include "obj/NiBlendFloatInterpolator.h"
#include "obj/NiBlendInterpolator.h"
#include "obj/NiBlendPoint3Interpolator.h"
#include "obj/NiBlendTransformInterpolator.h"
#include "obj/NiBoneLODController.h"
#include "obj/NiBoolData.h"
#include "obj/NiBooleanExtraData.h"
#include "obj/NiBoolInterpolator.h"
#include "obj/NiBoolTimelineInterpolator.h"
#include "obj/NiBSAnimationNode.h"
#include "obj/NiBSBoneLODController.h"
#include "obj/NiBSPArrayController.h"
#include "obj/NiBSParticleNode.h"
#include "obj/NiBSplineBasisData.h"
#include "obj/NiBSplineCompFloatInterpolator.h"
#include "obj/NiBSplineCompPoint3Interpolator.h"
#include "obj/NiBSplineCompTransformInterpolator.h"
#include "obj/NiBSplineData.h"
#include "obj/NiBSplineInterpolator.h"
#include "obj/NiCamera.h"
#include "obj/NiCollisionData.h"
#include "obj/NiCollisionObject.h"
#include "obj/NiColorData.h"
#include "obj/NiColorExtraData.h"
#include "obj/NiControllerManager.h"
#include "obj/NiControllerSequence.h"
#include "obj/NiDefaultAVObjectPalette.h"
#include "obj/NiDirectionalLight.h"
#include "obj/NiDitherProperty.h"
#include "obj/NiDynamicEffect.h"
#include "obj/NiExtraData.h"
#include "obj/NiFlipController.h"
#include "obj/NiFloatData.h"
#include "obj/NiFloatExtraData.h"
#include "obj/NiFloatExtraDataController.h"
#include "obj/NiFloatInterpolator.h"
#include "obj/NiFloatsExtraData.h"
#include "obj/NiFogProperty.h"
#include "obj/NiGeomMorpherController.h"
#include "obj/NiGravity.h"
#include "obj/NiIntegerExtraData.h"
#include "obj/NiIntegersExtraData.h"
#include "obj/NiInterpolator.h"
#include "obj/NiKeyframeController.h"
#include "obj/NiKeyframeData.h"
#include "obj/NiLight.h"
#include "obj/NiLightColorController.h"
#include "obj/NiLightDimmerController.h"
#include "obj/NiLODNode.h"
#include "obj/NiLookAtController.h"
#include "obj/NiLookAtInterpolator.h"
#include "obj/NiMaterialColorController.h"
#include "obj/NiMaterialProperty.h"
#include "obj/NiMeshParticleSystem.h"
#include "obj/NiMeshPSysData.h"
#include "obj/NiMorphData.h"
#include "obj/NiMultiTargetTransformController.h"
#include "obj/NiNode.h"
#include "obj/NiObject.h"
#include "obj/NiObjectNET.h"
#include "obj/NiPalette.h"
#include "obj/NiParticleBomb.h"
#include "obj/NiParticleColorModifier.h"
#include "obj/NiParticleGrowFade.h"
#include "obj/NiParticleMeshes.h"
#include "obj/NiParticleMeshesData.h"
#include "obj/NiParticleMeshModifier.h"
#include "obj/NiParticleRotation.h"
#include "obj/NiParticles.h"
#include "obj/NiParticlesData.h"
#include "obj/NiParticleSystem.h"
#include "obj/NiParticleSystemController.h"
#include "obj/NiPathController.h"
#include "obj/NiPathInterpolator.h"
#include "obj/NiPixelData.h"
#include "obj/NiPlanarCollider.h"
#include "obj/NiPoint3Interpolator.h"
#include "obj/NiPointLight.h"
#include "obj/NiPosData.h"
#include "obj/NiProperty.h"
#include "obj/NiPSysAgeDeathModifier.h"
#include "obj/NiPSysBombModifier.h"
#include "obj/NiPSysBoundUpdateModifier.h"
#include "obj/NiPSysBoxEmitter.h"
#include "obj/NiPSysColliderManager.h"
#include "obj/NiPSysColorModifier.h"
#include "obj/NiPSysCylinderEmitter.h"
#include "obj/NiPSysData.h"
#include "obj/NiPSysDragModifier.h"
#include "obj/NiPSysEmitter.h"
#include "obj/NiPSysEmitterCtlr.h"
#include "obj/NiPSysEmitterCtlrData.h"
#include "obj/NiPSysEmitterDeclinationCtlr.h"
#include "obj/NiPSysEmitterDeclinationVarCtlr.h"
#include "obj/NiPSysEmitterInitialRadiusCtlr.h"
#include "obj/NiPSysEmitterLifeSpanCtlr.h"
#include "obj/NiPSysEmitterSpeedCtlr.h"
#include "obj/NiPSysGravityModifier.h"
#include "obj/NiPSysGravityStrengthCtlr.h"
#include "obj/NiPSysGrowFadeModifier.h"
#include "obj/NiPSysMeshEmitter.h"
#include "obj/NiPSysMeshUpdateModifier.h"
#include "obj/NiPSysModifier.h"
#include "obj/NiPSysModifierActiveCtlr.h"
#include "obj/NiPSysPlanarCollider.h"
#include "obj/NiPSysPositionModifier.h"
#include "obj/NiPSysResetOnLoopCtlr.h"
#include "obj/NiPSysRotationModifier.h"
#include "obj/NiPSysSpawnModifier.h"
#include "obj/NiPSysSphereEmitter.h"
#include "obj/NiPSysUpdateCtlr.h"
#include "obj/NiPSysVolumeEmitter.h"
#include "obj/NiRangeLODData.h"
#include "obj/NiRotatingParticles.h"
#include "obj/NiRotatingParticlesData.h"
#include "obj/NiScreenLODData.h"
#include "obj/NiSequenceStreamHelper.h"
#include "obj/NiShadeProperty.h"
#include "obj/NiSingleInterpolatorController.h"
#include "obj/NiSkinData.h"
#include "obj/NiSkinInstance.h"
#include "obj/NiSkinPartition.h"
#include "obj/NiSourceTexture.h"
#include "obj/NiSpecularProperty.h"
#include "obj/NiSphericalCollider.h"
#include "obj/NiSpotLight.h"
#include "obj/NiStencilProperty.h"
#include "obj/NiStringExtraData.h"
#include "obj/NiStringPalette.h"
#include "obj/NiStringsExtraData.h"
#include "obj/NiTextKeyExtraData.h"
#include "obj/NiTextureEffect.h"
#include "obj/NiTextureTransformController.h"
#include "obj/NiTexturingProperty.h"
#include "obj/NiTimeController.h"
#include "obj/NiTransformController.h"
#include "obj/NiTransformData.h"
#include "obj/NiTransformInterpolator.h"
#include "obj/NiTriBasedGeom.h"
#include "obj/NiTriBasedGeomData.h"
#include "obj/NiTriShape.h"
#include "obj/NiTriShapeData.h"
#include "obj/NiTriStrips.h"
#include "obj/NiTriStripsData.h"
#include "obj/NiUVController.h"
#include "obj/NiUVData.h"
#include "obj/NiVectorExtraData.h"
#include "obj/NiVertexColorProperty.h"
#include "obj/NiVertWeightsExtraData.h"
#include "obj/NiVisController.h"
#include "obj/NiVisData.h"
#include "obj/NiWireframeProperty.h"
#include "obj/NiZBufferProperty.h"
#include "obj/RootCollisionNode.h"