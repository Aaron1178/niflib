/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "NiBlendFloatInterpolator.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiBlendFloatInterpolator::TYPE("NiBlendFloatInterpolator", &NI_BLEND_FLOAT_INTERPOLATOR_PARENT::TypeConst() );

NiBlendFloatInterpolator::NiBlendFloatInterpolator() NI_BLEND_FLOAT_INTERPOLATOR_CONSTRUCT {}

NiBlendFloatInterpolator::~NiBlendFloatInterpolator() {}

void NiBlendFloatInterpolator::Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_BLEND_FLOAT_INTERPOLATOR_READ
}

void NiBlendFloatInterpolator::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const {
	NI_BLEND_FLOAT_INTERPOLATOR_WRITE
}

string NiBlendFloatInterpolator::asString( bool verbose ) const {
	NI_BLEND_FLOAT_INTERPOLATOR_STRING
}

void NiBlendFloatInterpolator::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_BLEND_FLOAT_INTERPOLATOR_FIXLINKS
}

list<NiObjectRef> NiBlendFloatInterpolator::GetRefs() const {
	NI_BLEND_FLOAT_INTERPOLATOR_GETREFS
}

const Type & NiBlendFloatInterpolator::GetType() const {
	return TYPE;
};

