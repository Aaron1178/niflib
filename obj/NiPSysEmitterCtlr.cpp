/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "NiPSysEmitterCtlr.h"
#include "NiPSysEmitterCtlrData.h"
#include "NiInterpolator.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiPSysEmitterCtlr::TYPE("NiPSysEmitterCtlr", &NI_P_SYS_EMITTER_CTLR_PARENT::TypeConst() );

NiPSysEmitterCtlr::NiPSysEmitterCtlr() NI_P_SYS_EMITTER_CTLR_CONSTRUCT {}

NiPSysEmitterCtlr::~NiPSysEmitterCtlr() {}

void NiPSysEmitterCtlr::Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_P_SYS_EMITTER_CTLR_READ
}

void NiPSysEmitterCtlr::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const {
	NI_P_SYS_EMITTER_CTLR_WRITE
}

string NiPSysEmitterCtlr::asString( bool verbose ) const {
	NI_P_SYS_EMITTER_CTLR_STRING
}

void NiPSysEmitterCtlr::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_P_SYS_EMITTER_CTLR_FIXLINKS
}

list<NiObjectRef> NiPSysEmitterCtlr::GetRefs() const {
	NI_P_SYS_EMITTER_CTLR_GETREFS
}

const Type & NiPSysEmitterCtlr::GetType() const {
	return TYPE;
};

