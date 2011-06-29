/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _NICOLORDATA_H_
#define _NICOLORDATA_H_

//--BEGIN FILE HEAD CUSTOM CODE--//
//--END CUSTOM CODE--//

#include "NiObject.h"

// Include structures
#include "../gen/KeyGroup.h"
namespace Niflib {

class NiColorData;
typedef Ref<NiColorData> NiColorDataRef;

/*! Color data for material color controller. */
class NiColorData : public NiObject {
public:
	/*! Constructor */
	NIFLIB_API NiColorData();

	/*! Destructor */
	NIFLIB_API virtual ~NiColorData();

	/*!
	 * A constant value which uniquly identifies objects of this type.
	 */
	NIFLIB_API static const Type TYPE;

	/*!
	 * A factory function used during file reading to create an instance of this type of object.
	 * \return A pointer to a newly allocated instance of this type of object.
	 */
	NIFLIB_API static NiObject * Create();

	/*!
	 * Summarizes the information contained in this object in English.
	 * \param[in] verbose Determines whether or not detailed information about large areas of data will be printed out.
	 * \return A string containing a summary of the information within the object in English.  This is the function that Niflyze calls to generate its analysis, so the output is the same.
	 */
	NIFLIB_API virtual string asString( bool verbose = false ) const;

	/*!
	 * Used to determine the type of a particular instance of this object.
	 * \return The type constant for the actual type of the object.
	 */
	NIFLIB_API virtual const Type & GetType() const;

	//--BEGIN MISC CUSTOM CODE--//

	/*! Retrieves the type of color interpolation being used.
	 * \return The color key type specifing the type of interpolation being used.
	 * \sa NiColorData::SetKeyType
	 */
	NIFLIB_API KeyType GetKeyType() const;

	/*! Sets the type of color interpolation being used.  Does not affect existing key data.
	 * \param t The new color key type specifing the type of interpolation to be used.
	 * \sa NiColorData::GetKeyType
	 */
	NIFLIB_API void SetKeyType( KeyType t );

	/*! Retrieves the color key data.
	 * \return A vector containing Key<Color4> data which specify color over time.
	 * \sa NiColorData::SetKeys, Key
	 */
	NIFLIB_API vector< Key<Color4> > GetKeys() const;

	/*! Sets the color key data.
	 * \param keys A vector containing new Key<Color4> data which will replace any existing data.
	 * \sa NiColorData::GetKeys, Key
	 */
	NIFLIB_API void SetKeys( vector< Key<Color4> > const & keys );

	//--END CUSTOM CODE--//
protected:
	/*! The color keys. */
	KeyGroup<Color4 > data;
public:
	/*! NIFLIB_HIDDEN function.  For internal use only. */
	NIFLIB_HIDDEN virtual void Read( istream& in, list<unsigned int> & link_stack, const NifInfo & info );
	/*! NIFLIB_HIDDEN function.  For internal use only. */
	NIFLIB_HIDDEN virtual void Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, const NifInfo & info ) const;
	/*! NIFLIB_HIDDEN function.  For internal use only. */
	NIFLIB_HIDDEN virtual void FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, const NifInfo & info );
	/*! NIFLIB_HIDDEN function.  For internal use only. */
	NIFLIB_HIDDEN virtual list<NiObjectRef> GetRefs() const;
	/*! NIFLIB_HIDDEN function.  For internal use only. */
	NIFLIB_HIDDEN virtual list<NiObject *> GetPtrs() const;
};

//--BEGIN FILE FOOT CUSTOM CODE--//
//--END CUSTOM CODE--//

} //End Niflib namespace
#endif
