/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "NiPSysEmitterDeclinationVarCtlr.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiPSysEmitterDeclinationVarCtlr::TYPE("NiPSysEmitterDeclinationVarCtlr", &NI_P_SYS_EMITTER_DECLINATION_VAR_CTLR_PARENT::TypeConst() );

NiPSysEmitterDeclinationVarCtlr::NiPSysEmitterDeclinationVarCtlr() NI_P_SYS_EMITTER_DECLINATION_VAR_CTLR_CONSTRUCT {}

NiPSysEmitterDeclinationVarCtlr::~NiPSysEmitterDeclinationVarCtlr() {}

void NiPSysEmitterDeclinationVarCtlr::Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_P_SYS_EMITTER_DECLINATION_VAR_CTLR_READ
}

void NiPSysEmitterDeclinationVarCtlr::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const {
	NI_P_SYS_EMITTER_DECLINATION_VAR_CTLR_WRITE
}

string NiPSysEmitterDeclinationVarCtlr::asString( bool verbose ) const {
	NI_P_SYS_EMITTER_DECLINATION_VAR_CTLR_STRING
}

void NiPSysEmitterDeclinationVarCtlr::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_P_SYS_EMITTER_DECLINATION_VAR_CTLR_FIXLINKS
}

list<NiObjectRef> NiPSysEmitterDeclinationVarCtlr::GetRefs() const {
	NI_P_SYS_EMITTER_DECLINATION_VAR_CTLR_GETREFS
}

const Type & NiPSysEmitterDeclinationVarCtlr::GetType() const {
	return TYPE;
};

