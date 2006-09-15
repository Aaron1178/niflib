/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "RootCollisionNode.h"
using namespace Niflib;

//Definition of TYPE constant
const Type RootCollisionNode::TYPE("RootCollisionNode", &ROOT_COLLISION_NODE_PARENT::TypeConst() );

RootCollisionNode::RootCollisionNode() ROOT_COLLISION_NODE_CONSTRUCT {}

RootCollisionNode::~RootCollisionNode() {}

void RootCollisionNode::Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	ROOT_COLLISION_NODE_READ
}

void RootCollisionNode::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const {
	ROOT_COLLISION_NODE_WRITE
}

string RootCollisionNode::asString( bool verbose ) const {
	ROOT_COLLISION_NODE_STRING
}

void RootCollisionNode::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	ROOT_COLLISION_NODE_FIXLINKS
}

list<NiObjectRef> RootCollisionNode::GetRefs() const {
	ROOT_COLLISION_NODE_GETREFS
}

const Type & RootCollisionNode::GetType() const {
	return TYPE;
};

