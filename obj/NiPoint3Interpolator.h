/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIPOINT3INTERPOLATOR_H_
#define _NIPOINT3INTERPOLATOR_H_

#include "NiInterpolator.h"

// Include structures
#include "../Ref.h"
namespace Niflib {

// Forward define of referenced blocks
class NiPosData;

#include "../gen/obj_defines.h"

class NiPoint3Interpolator;
typedef Ref<NiPoint3Interpolator> NiPoint3InterpolatorRef;

/*!
 * NiPoint3Interpolator - Unknown.
 */

class NIFLIB_API NiPoint3Interpolator : public NI_POINT3_INTERPOLATOR_PARENT {
public:
	NiPoint3Interpolator();
	~NiPoint3Interpolator();
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

protected:
	NI_POINT3_INTERPOLATOR_MEMBERS
	STANDARD_INTERNAL_METHODS
};

}
#endif
