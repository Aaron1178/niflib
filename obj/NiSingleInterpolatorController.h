/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NISINGLEINTERPOLATORCONTROLLER_H_
#define _NISINGLEINTERPOLATORCONTROLLER_H_

#include "NiTimeController.h"

// Include structures
#include "../Ref.h"
namespace Niflib {

// Forward define of referenced blocks
class NiInterpolator;

#include "../gen/obj_defines.h"

class NiSingleInterpolatorController;
typedef Ref<NiSingleInterpolatorController> NiSingleInterpolatorControllerRef;

/*!
 * NiSingleInterpolatorController - A controller referring to an
 * interpolator.
 */

class NIFLIB_API NiSingleInterpolatorController : public NI_SINGLE_INTERPOLATOR_CONTROLLER_PARENT {
public:
	NiSingleInterpolatorController();
	~NiSingleInterpolatorController();
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

	Ref<NiInterpolator> GetInterpolator() const;
	void SetInterpolator( const Ref<NiInterpolator> & n );
protected:
	NI_SINGLE_INTERPOLATOR_CONTROLLER_MEMBERS
	STANDARD_INTERNAL_METHODS
};

}
#endif
