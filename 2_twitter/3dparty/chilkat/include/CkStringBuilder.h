// CkStringBuilder.h: interface for the CkStringBuilder class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkStringBuilder_H
#define _CkStringBuilder_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkStringBuilder
class CK_VISIBLE_PUBLIC CkStringBuilder  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkStringBuilder(const CkStringBuilder &);
	CkStringBuilder &operator=(const CkStringBuilder &);

    public:
	CkStringBuilder(void);
	virtual ~CkStringBuilder(void);

	static CkStringBuilder *createNew(void);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// The number of characters of the string contained within this instance.
	int get_Length(void);



	// ----------------------
	// Methods
	// ----------------------
	// Appends a copy of the specified string to this instance.
	bool Append(const char *value);


	// Appends binary data using the encoding specified by encoding, such as "base64",
	// "hex", etc.
	bool AppendEncoded(CkByteData &binaryData, const char *encoding);


	// Appends the string representation of a specified 32-bit signed integer to this
	// instance.
	bool AppendInt(int value);


	// Appends the string representation of a specified 64-bit signed integer to this
	// instance.
	bool AppendInt64(__int64 value);


	// Removes all characters from the current StringBuilder instance.
	void Clear(void);


	// Returns true if the caseSensitive is contained within this object. For case sensitive
	// matching, set caseSensitive equal to true. For case-insensitive, set caseSensitive equal to
	// false.
	bool Contains(const char *str, bool caseSensitive);


	// Returns true if the contents of this object equals the str. Returns false
	// if unequal. For case insensitive equality, set caseSensitive equal to false.
	bool Equals(const char *str, bool caseSensitive);


	// Returns the contents as a string.
	bool GetAsString(CkString &outStr);

	// Returns the contents as a string.
	const char *getAsString(void);
	// Returns the contents as a string.
	const char *asString(void);


	// Replaces all occurrences of a specified string in this instance with another
	// specified string.
	void Replace(const char *value, const char *replacement);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
