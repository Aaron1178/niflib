/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "NiTransformInterpolator.h"
#include "NiTransformData.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiTransformInterpolator::TYPE("NiTransformInterpolator", &NI_TRANSFORM_INTERPOLATOR_PARENT::TypeConst() );

NiTransformInterpolator::NiTransformInterpolator() NI_TRANSFORM_INTERPOLATOR_CONSTRUCT {}

NiTransformInterpolator::~NiTransformInterpolator() {}

void NiTransformInterpolator::Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_TRANSFORM_INTERPOLATOR_READ
}

void NiTransformInterpolator::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const {
	NI_TRANSFORM_INTERPOLATOR_WRITE
}

string NiTransformInterpolator::asString( bool verbose ) const {
	NI_TRANSFORM_INTERPOLATOR_STRING
}

void NiTransformInterpolator::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_TRANSFORM_INTERPOLATOR_FIXLINKS
}

list<NiObjectRef> NiTransformInterpolator::GetRefs() const {
	NI_TRANSFORM_INTERPOLATOR_GETREFS
}

const Type & NiTransformInterpolator::GetType() const {
	return TYPE;
};

