/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NICONTROLLERMANAGER_H_
#define _NICONTROLLERMANAGER_H_

#include "NiTimeController.h"

// Include structures
#include "../Ref.h"
namespace Niflib {

// Forward define of referenced blocks
class NiControllerSequence;
class NiDefaultAVObjectPalette;

#include "../gen/obj_defines.h"

class NiControllerManager;
typedef Ref<NiControllerManager> NiControllerManagerRef;

/*!
 * NiControllerManager - Unknown. Root of all controllers?
 */

class NIFLIB_API NiControllerManager : public NI_CONTROLLER_MANAGER_PARENT {
public:
	NiControllerManager();
	~NiControllerManager();
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

	//TODO:  This is not a priority but needs to be implemented eventually
protected:
	NI_CONTROLLER_MANAGER_MEMBERS
	STANDARD_INTERNAL_METHODS
};

}
#endif
