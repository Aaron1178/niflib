/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "NiLookAtInterpolator.h"
#include "NiNode.h"
#include "NiPoint3Interpolator.h"
#include "NiFloatInterpolator.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiLookAtInterpolator::TYPE("NiLookAtInterpolator", &NI_LOOK_AT_INTERPOLATOR_PARENT::TypeConst() );

NiLookAtInterpolator::NiLookAtInterpolator() NI_LOOK_AT_INTERPOLATOR_CONSTRUCT {}

NiLookAtInterpolator::~NiLookAtInterpolator() {}

void NiLookAtInterpolator::Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_LOOK_AT_INTERPOLATOR_READ
}

void NiLookAtInterpolator::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const {
	NI_LOOK_AT_INTERPOLATOR_WRITE
}

string NiLookAtInterpolator::asString( bool verbose ) const {
	NI_LOOK_AT_INTERPOLATOR_STRING
}

void NiLookAtInterpolator::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_LOOK_AT_INTERPOLATOR_FIXLINKS
}

list<NiObjectRef> NiLookAtInterpolator::GetRefs() const {
	NI_LOOK_AT_INTERPOLATOR_GETREFS
}

const Type & NiLookAtInterpolator::GetType() const {
	return TYPE;
};

