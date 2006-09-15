/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "bhkWorldObject.h"
using namespace Niflib;

//Definition of TYPE constant
const Type bhkWorldObject::TYPE("bhkWorldObject", &BHK_WORLD_OBJECT_PARENT::TypeConst() );

bhkWorldObject::bhkWorldObject() BHK_WORLD_OBJECT_CONSTRUCT {}

bhkWorldObject::~bhkWorldObject() {}

void bhkWorldObject::Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	BHK_WORLD_OBJECT_READ
}

void bhkWorldObject::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const {
	BHK_WORLD_OBJECT_WRITE
}

string bhkWorldObject::asString( bool verbose ) const {
	BHK_WORLD_OBJECT_STRING
}

void bhkWorldObject::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	BHK_WORLD_OBJECT_FIXLINKS
}

list<NiObjectRef> bhkWorldObject::GetRefs() const {
	BHK_WORLD_OBJECT_GETREFS
}

const Type & bhkWorldObject::GetType() const {
	return TYPE;
};

