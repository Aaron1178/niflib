/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIPSYSMODIFIER_H_
#define _NIPSYSMODIFIER_H_

#include "NiObject.h"
namespace Niflib {

// Forward define of referenced blocks
class NiParticleSystem;

#include "../gen/obj_defines.h"

class NiPSysModifier;
typedef Ref<NiPSysModifier> NiPSysModifierRef;

/*!
 * NiPSysModifier - Generic particle system modifier block.
 */

class NIFLIB_API NiPSysModifier : public NI_P_SYS_MODIFIER_PARENT {
public:
	NiPSysModifier();
	~NiPSysModifier();
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
	NI_P_SYS_MODIFIER_MEMBERS
	STANDARD_INTERNAL_METHODS
};

}
#endif
