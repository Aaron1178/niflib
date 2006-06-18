/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "NiControllerManager.h"
#include "NiControllerSequence.h"
#include "NiDefaultAVObjectPalette.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiControllerManager::TYPE("NiControllerManager", &NI_CONTROLLER_MANAGER_PARENT::TypeConst() );

NiControllerManager::NiControllerManager() NI_CONTROLLER_MANAGER_CONSTRUCT {}

NiControllerManager::~NiControllerManager() {}

void NiControllerManager::Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_CONTROLLER_MANAGER_READ
}

void NiControllerManager::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const {
	NI_CONTROLLER_MANAGER_WRITE
}

string NiControllerManager::asString( bool verbose ) const {
	NI_CONTROLLER_MANAGER_STRING
}

void NiControllerManager::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_CONTROLLER_MANAGER_FIXLINKS
}

list<NiObjectRef> NiControllerManager::GetRefs() const {
	NI_CONTROLLER_MANAGER_GETREFS
}

const Type & NiControllerManager::GetType() const {
	return TYPE;
};

