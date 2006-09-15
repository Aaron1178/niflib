/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "bhkHingeConstraint.h"
using namespace Niflib;

//Definition of TYPE constant
const Type bhkHingeConstraint::TYPE("bhkHingeConstraint", &BHK_HINGE_CONSTRAINT_PARENT::TypeConst() );

bhkHingeConstraint::bhkHingeConstraint() BHK_HINGE_CONSTRAINT_CONSTRUCT {}

bhkHingeConstraint::~bhkHingeConstraint() {}

void bhkHingeConstraint::Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	BHK_HINGE_CONSTRAINT_READ
}

void bhkHingeConstraint::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const {
	BHK_HINGE_CONSTRAINT_WRITE
}

string bhkHingeConstraint::asString( bool verbose ) const {
	BHK_HINGE_CONSTRAINT_STRING
}

void bhkHingeConstraint::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	BHK_HINGE_CONSTRAINT_FIXLINKS
}

list<NiObjectRef> bhkHingeConstraint::GetRefs() const {
	BHK_HINGE_CONSTRAINT_GETREFS
}

const Type & bhkHingeConstraint::GetType() const {
	return TYPE;
};

