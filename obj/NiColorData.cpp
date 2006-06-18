/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "NiColorData.h"
#include "../gen/KeyGroup.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiColorData::TYPE("NiColorData", &NI_COLOR_DATA_PARENT::TypeConst() );

NiColorData::NiColorData() NI_COLOR_DATA_CONSTRUCT {}

NiColorData::~NiColorData() {}

void NiColorData::Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_COLOR_DATA_READ
}

void NiColorData::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const {
	NI_COLOR_DATA_WRITE
}

string NiColorData::asString( bool verbose ) const {
	NI_COLOR_DATA_STRING
}

void NiColorData::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_COLOR_DATA_FIXLINKS
}

list<NiObjectRef> NiColorData::GetRefs() const {
	NI_COLOR_DATA_GETREFS
}

const Type & NiColorData::GetType() const {
	return TYPE;
};

KeyType NiColorData::GetKeyType() const {
	return data.interpolation;
}

void NiColorData::SetKeyType( KeyType t ) {
	data.interpolation = t;
}

vector< Key<Color4> > NiColorData::GetKeys() const {
	return data.keys;
}

void NiColorData::SetKeys( vector< Key<Color4> > const & keys ) {
	data.keys = keys;
}

