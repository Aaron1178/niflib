/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIBSPLINECOMPFLOATINTERPOLATOR_H_
#define _NIBSPLINECOMPFLOATINTERPOLATOR_H_

#include "NiBSplineInterpolator.h"

#include "gen/obj_defines.h"

/*
 * NiBSplineCompFloatInterpolator
 */

class NiBSplineCompFloatInterpolator;
typedef Ref<NiBSplineCompFloatInterpolator> NiBSplineCompFloatInterpolatorRef;

class NiBSplineCompFloatInterpolator : public NI_B_SPLINE_COMP_FLOAT_INTERPOLATOR_PARENT {
public:
	NiBSplineCompFloatInterpolator();
	~NiBSplineCompFloatInterpolator();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version );
	virtual list<NiObjectRef> GetRefs() const;
	virtual const Type & GetType() const;
protected:
	NI_B_SPLINE_COMP_FLOAT_INTERPOLATOR_MEMBERS
};

#endif
