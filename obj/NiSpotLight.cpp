/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "NiSpotLight.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiSpotLight::TYPE("NiSpotLight", &NI_SPOT_LIGHT_PARENT::TypeConst() );

NiSpotLight::NiSpotLight() NI_SPOT_LIGHT_CONSTRUCT {}

NiSpotLight::~NiSpotLight() {}

void NiSpotLight::Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_SPOT_LIGHT_READ
}

void NiSpotLight::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const {
	NI_SPOT_LIGHT_WRITE
}

string NiSpotLight::asString( bool verbose ) const {
	NI_SPOT_LIGHT_STRING
}

void NiSpotLight::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_SPOT_LIGHT_FIXLINKS
}

list<NiObjectRef> NiSpotLight::GetRefs() const {
	NI_SPOT_LIGHT_GETREFS
}

const Type & NiSpotLight::GetType() const {
	return TYPE;
};

