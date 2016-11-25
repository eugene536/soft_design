// CkStringBuilderW.h: interface for the CkStringBuilderW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkStringBuilderW_H
#define _CkStringBuilderW_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkWideCharBase.h"

class CkByteData;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkStringBuilderW
class CK_VISIBLE_PUBLIC CkStringBuilderW  : public CkWideCharBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkStringBuilderW(const CkStringBuilderW &);
	CkStringBuilderW &operator=(const CkStringBuilderW &);

    public:
	CkStringBuilderW(void);
	virtual ~CkStringBuilderW(void);

	static CkStringBuilderW *createNew(void);
	

	
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
	bool Append(const wchar_t *value);

	// Appends binary data using the encoding specified by encoding, such as "base64",
	// "hex", etc.
	bool AppendEncoded(CkByteData &binaryData, const wchar_t *encoding);

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
	bool Contains(const wchar_t *str, bool caseSensitive);

	// Returns true if the contents of this object equals the str. Returns false
	// if unequal. For case insensitive equality, set caseSensitive equal to false.
	bool Equals(const wchar_t *str, bool caseSensitive);

	// Returns the contents as a string.
	bool GetAsString(CkString &outStr);
	// Returns the contents as a string.
	const wchar_t *getAsString(void);
	// Returns the contents as a string.
	const wchar_t *asString(void);

	// Replaces all occurrences of a specified string in this instance with another
	// specified string.
	void Replace(const wchar_t *value, const wchar_t *replacement);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
