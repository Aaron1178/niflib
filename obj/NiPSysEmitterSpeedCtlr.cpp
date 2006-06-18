/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "NiPSysEmitterSpeedCtlr.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiPSysEmitterSpeedCtlr::TYPE("NiPSysEmitterSpeedCtlr", &NI_P_SYS_EMITTER_SPEED_CTLR_PARENT::TypeConst() );

NiPSysEmitterSpeedCtlr::NiPSysEmitterSpeedCtlr() NI_P_SYS_EMITTER_SPEED_CTLR_CONSTRUCT {}

NiPSysEmitterSpeedCtlr::~NiPSysEmitterSpeedCtlr() {}

void NiPSysEmitterSpeedCtlr::Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_P_SYS_EMITTER_SPEED_CTLR_READ
}

void NiPSysEmitterSpeedCtlr::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const {
	NI_P_SYS_EMITTER_SPEED_CTLR_WRITE
}

string NiPSysEmitterSpeedCtlr::asString( bool verbose ) const {
	NI_P_SYS_EMITTER_SPEED_CTLR_STRING
}

void NiPSysEmitterSpeedCtlr::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_P_SYS_EMITTER_SPEED_CTLR_FIXLINKS
}

list<NiObjectRef> NiPSysEmitterSpeedCtlr::GetRefs() const {
	NI_P_SYS_EMITTER_SPEED_CTLR_GETREFS
}

const Type & NiPSysEmitterSpeedCtlr::GetType() const {
	return TYPE;
};

