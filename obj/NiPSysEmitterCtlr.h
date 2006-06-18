/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIPSYSEMITTERCTLR_H_
#define _NIPSYSEMITTERCTLR_H_

#include "APSysCtlr.h"

// Include structures
#include "../Ref.h"
namespace Niflib {

// Forward define of referenced blocks
class NiPSysEmitterCtlrData;
class NiInterpolator;

#include "../gen/obj_defines.h"

class NiPSysEmitterCtlr;
typedef Ref<NiPSysEmitterCtlr> NiPSysEmitterCtlrRef;

/*!
 * NiPSysEmitterCtlr - Particle system emitter controller.
 */

class NIFLIB_API NiPSysEmitterCtlr : public NI_P_SYS_EMITTER_CTLR_PARENT {
public:
	NiPSysEmitterCtlr();
	~NiPSysEmitterCtlr();
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
	NI_P_SYS_EMITTER_CTLR_MEMBERS
	STANDARD_INTERNAL_METHODS
};

}
#endif
