/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NITRIBASEDGEOM_H_
#define _NITRIBASEDGEOM_H_

#include "NiAVObject.h"

// Include structures
#include "../Ref.h"
namespace Niflib {

// Forward define of referenced blocks
class NiTriBasedGeomData;
class NiSkinInstance;
class NiObject;

#include "../gen/obj_defines.h"

class NiTriBasedGeom;
typedef Ref<NiTriBasedGeom> NiTriBasedGeomRef;

/*!
 * NiTriBasedGeom - Describes a mesh, built from triangles.
 */

class NIFLIB_API NiTriBasedGeom : public NI_TRI_BASED_GEOM_PARENT {
public:
	NiTriBasedGeom();
	~NiTriBasedGeom();
	//Run-Time Type Information
	static const Type & TypeConst() { return TYPE; }
private:	
	static const Type TYPE;
public:
	virtual void Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version );
	virtual list<NiObjectRef> GetRefs() const;
	virtual const Type & GetType() const;

	//TODO:  Handle attatchment of SkinInstance with new skinning API

	Ref<NiTriBasedGeomData> GetData() const;
	void SetData( const Ref<NiTriBasedGeomData> & n );

	Ref<NiObject> GetUnknownLink() const;
	void SetUnknownLink( const Ref<NiObject> & n );

	string GetShader() const;
	void SetShader( const string & n );

	void SetSkinInstance( Ref<NiSkinInstance> & n );
	Ref<NiSkinInstance> GetSkinInstance() const;
	
protected:
	NI_TRI_BASED_GEOM_MEMBERS
	STANDARD_INTERNAL_METHODS
};

}
#endif
