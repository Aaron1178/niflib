/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIVERTEXCOLORPROPERTY_H_
#define _NIVERTEXCOLORPROPERTY_H_

#include "xml_extract.h"
#include NI_VERTEX_COLOR_PROPERTY_INCLUDE

/*
 * NiVertexColorProperty
 */

class NiVertexColorProperty;
typedef Ref<NiVertexColorProperty> NiVertexColorPropertyRef;

class NiVertexColorProperty : public NI_VERTEX_COLOR_PROPERTY_PARENT {
public:
	NiVertexColorProperty();
	~NiVertexColorProperty();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> link_stack, unsigned int version );
private:
	NI_VERTEX_COLOR_PROPERTY_MEMBERS
};
#endif