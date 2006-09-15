/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "NiPathController.h"
#include "NiPosData.h"
#include "NiFloatData.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiPathController::TYPE("NiPathController", &NI_PATH_CONTROLLER_PARENT::TypeConst() );

NiPathController::NiPathController() NI_PATH_CONTROLLER_CONSTRUCT {}

NiPathController::~NiPathController() {}

void NiPathController::Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_PATH_CONTROLLER_READ
}

void NiPathController::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const {
	NI_PATH_CONTROLLER_WRITE
}

string NiPathController::asString( bool verbose ) const {
	NI_PATH_CONTROLLER_STRING
}

void NiPathController::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_PATH_CONTROLLER_FIXLINKS
}

list<NiObjectRef> NiPathController::GetRefs() const {
	NI_PATH_CONTROLLER_GETREFS
}

const Type & NiPathController::GetType() const {
	return TYPE;
};

Ref<NiFloatData> NiPathController::GetFloatData() const {
	return floatData;
}

void NiPathController::SetFloatData( const Ref<NiFloatData> & n ) {
	floatData = n;
}

Ref<NiPosData> NiPathController::GetPosData() const {
	return posData;
}

void NiPathController::SetPosData( const Ref<NiPosData> & n ) {
	posData = n;
}
