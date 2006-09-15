/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "NiScreenLODData.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiScreenLODData::TYPE("NiScreenLODData", &NI_SCREEN_L_O_D_DATA_PARENT::TypeConst() );

NiScreenLODData::NiScreenLODData() NI_SCREEN_L_O_D_DATA_CONSTRUCT {}

NiScreenLODData::~NiScreenLODData() {}

void NiScreenLODData::Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_SCREEN_L_O_D_DATA_READ
}

void NiScreenLODData::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const {
	NI_SCREEN_L_O_D_DATA_WRITE
}

string NiScreenLODData::asString( bool verbose ) const {
	NI_SCREEN_L_O_D_DATA_STRING
}

void NiScreenLODData::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_SCREEN_L_O_D_DATA_FIXLINKS
}

list<NiObjectRef> NiScreenLODData::GetRefs() const {
	NI_SCREEN_L_O_D_DATA_GETREFS
}

const Type & NiScreenLODData::GetType() const {
	return TYPE;
};

