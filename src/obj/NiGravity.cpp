/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "NiGravity.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiGravity::TYPE("NiGravity", &NI_GRAVITY_PARENT::TypeConst() );

NiGravity::NiGravity() NI_GRAVITY_CONSTRUCT {}

NiGravity::~NiGravity() {}

void NiGravity::Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_GRAVITY_READ
}

void NiGravity::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const {
	NI_GRAVITY_WRITE
}

string NiGravity::asString( bool verbose ) const {
	NI_GRAVITY_STRING
}

void NiGravity::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_GRAVITY_FIXLINKS
}

list<NiObjectRef> NiGravity::GetRefs() const {
	NI_GRAVITY_GETREFS
}

const Type & NiGravity::GetType() const {
	return TYPE;
};

