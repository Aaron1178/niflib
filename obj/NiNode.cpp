/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "obj/NiNode.h"
#include "obj/NiAVObject.h"
#include "obj/NiDynamicEffect.h"

//Definition of TYPE constant
const Type NiNode::TYPE("NiNode", &NI_NODE_PARENT::TYPE );

NiNode::NiNode() NI_NODE_CONSTRUCT {}

NiNode::~NiNode() {}

void NiNode::Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_NODE_READ
}

void NiNode::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const {
	NI_NODE_WRITE
}

string NiNode::asString( bool verbose ) const {
	NI_NODE_STRING
}

void NiNode::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_NODE_FIXLINKS
}

list<NiObjectRef> NiNode::GetRefs() const {
	NI_NODE_GETREFS
}

const Type & NiNode::GetType() const {
	return TYPE;
};

