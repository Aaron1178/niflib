/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIPSYSROTATIONMODIFIER_H_
#define _NIPSYSROTATIONMODIFIER_H_

#include "NiPSysModifier.h"
namespace Niflib {


#include "../gen/obj_defines.h"

class NiPSysRotationModifier;
typedef Ref<NiPSysRotationModifier> NiPSysRotationModifierRef;

/*!
 * NiPSysRotationModifier - Unknown particle system modifier.
 */

class NIFLIB_API NiPSysRotationModifier : public NI_P_SYS_ROTATION_MODIFIER_PARENT {
public:
	NiPSysRotationModifier();
	~NiPSysRotationModifier();
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
	NI_P_SYS_ROTATION_MODIFIER_MEMBERS
	STANDARD_INTERNAL_METHODS
};

}
#endif
