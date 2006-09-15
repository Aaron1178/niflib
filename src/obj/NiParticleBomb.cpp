/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "NiParticleBomb.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiParticleBomb::TYPE("NiParticleBomb", &NI_PARTICLE_BOMB_PARENT::TypeConst() );

NiParticleBomb::NiParticleBomb() NI_PARTICLE_BOMB_CONSTRUCT {}

NiParticleBomb::~NiParticleBomb() {}

void NiParticleBomb::Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_PARTICLE_BOMB_READ
}

void NiParticleBomb::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const {
	NI_PARTICLE_BOMB_WRITE
}

string NiParticleBomb::asString( bool verbose ) const {
	NI_PARTICLE_BOMB_STRING
}

void NiParticleBomb::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_PARTICLE_BOMB_FIXLINKS
}

list<NiObjectRef> NiParticleBomb::GetRefs() const {
	NI_PARTICLE_BOMB_GETREFS
}

const Type & NiParticleBomb::GetType() const {
	return TYPE;
};

