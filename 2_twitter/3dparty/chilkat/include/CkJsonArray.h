// CkJsonArray.h: interface for the CkJsonArray class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkJsonArray_H
#define _CkJsonArray_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkJsonObject;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkJsonArray
class CK_VISIBLE_PUBLIC CkJsonArray  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkJsonArray(const CkJsonArray &);
	CkJsonArray &operator=(const CkJsonArray &);

    public:
	CkJsonArray(void);
	virtual ~CkJsonArray(void);

	static CkJsonArray *createNew(void);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// The number of JSON values in the array.
	int get_Size(void);



	// ----------------------
	// Methods
	// ----------------------
	// Inserts a new and empty JSON array member to the position indicated by index. To
	// prepend, pass an index of 0. To append, pass an index of -1. Indexing is 0-based
	// (the 1st member is at index 0).
	bool AddArrayAt(int index);


	// Inserts a new boolean member to the position indicated by index. To prepend, pass
	// an index of 0. To append, pass an index of -1. Indexing is 0-based (the 1st member
	// is at index 0).
	bool AddBoolAt(int index, bool value);


	// Inserts a new integer member to the position indicated by index. To prepend, pass
	// an index of 0. To append, pass an index of -1. Indexing is 0-based (the 1st member
	// is at index 0).
	bool AddIntAt(int index, int value);


	// Inserts a new null member to the position indicated by index. To prepend, pass an
	// index of 0. To append, pass an index of -1. Indexing is 0-based (the 1st member is
	// at index 0).
	bool AddNullAt(int index);


	// Inserts a new numeric member to the position indicated by index. The numericStr is an
	// integer, float, or double already converted to a string in the format desired by
	// the application. To prepend, pass an index of 0. To append, pass an index of -1.
	// Indexing is 0-based (the 1st member is at index 0).
	bool AddNumberAt(int index, const char *numericStr);


	// Inserts a new and empty JSON object member to the position indicated by index. To
	// prepend, pass an index of 0. To append, pass an index of -1. Indexing is 0-based
	// (the 1st member is at index 0).
	bool AddObjectAt(int index);


	// Inserts a new string at the position indicated by index. To prepend, pass an index
	// of 0. To append, pass an index of -1. Indexing is 0-based (the 1st member is at
	// index 0).
	bool AddStringAt(int index, const char *value);


	// Returns the JSON array that is the value of the Nth array element. Indexing is
	// 0-based (the 1st member is at index 0).
	// The caller is responsible for deleting the object returned by this method.
	CkJsonArray *ArrayAt(int index);


	// Returns the boolean value of the Nth array element. Indexing is 0-based (the 1st
	// member is at index 0).
	bool BoolAt(int index);


	// Deletes the array element at the given index. Indexing is 0-based (the 1st member
	// is at index 0).
	bool DeleteAt(int index);


	// Writes the JSON array (rooted at the caller) and returns as a string.
	// 
	// Note: To control the compact/non-compact format, and to control the LF/CRLF
	// line-endings, set the EmitCompact and EmitCrlf properties of the JSON object
	// prior to getting the CLASS_NAME object.
	// 
	bool Emit(CkString &outStr);

	// Writes the JSON array (rooted at the caller) and returns as a string.
	// 
	// Note: To control the compact/non-compact format, and to control the LF/CRLF
	// line-endings, set the EmitCompact and EmitCrlf properties of the JSON object
	// prior to getting the CLASS_NAME object.
	// 
	const char *emit(void);

	// Returns the integer value of the Nth array element. Indexing is 0-based (the 1st
	// member is at index 0).
	int IntAt(int index);


	// Returns the true if the Nth array element is null, otherwise returns false.
	// Indexing is 0-based (the 1st member is at index 0).
	bool IsNullAt(int index);


	// Returns the JSON object that is the value of the Nth array element. Indexing is
	// 0-based (the 1st member is at index 0).
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObject *ObjectAt(int index);


	// Sets the boolean value of the Nth array element. Indexing is 0-based (the 1st
	// member is at index 0).
	bool SetBoolAt(int index, bool value);


	// Sets the integer value of the Nth array element. Indexing is 0-based (the 1st
	// member is at index 0).
	bool SetIntAt(int index, int value);


	// Sets the Nth array element to the value of null. Indexing is 0-based (the 1st
	// member is at index 0).
	bool SetNullAt(int index);


	// Sets the numeric value of the Nth array element. The value is an integer, float,
	// or double already converted to a string in the format desired by the
	// application. Indexing is 0-based (the 1st member is at index 0).
	bool SetNumberAt(int index, const char *value);


	// Sets the string value of the Nth array element. Indexing is 0-based (the 1st
	// member is at index 0).
	bool SetStringAt(int index, const char *value);


	// Returns the string value of the Nth array element. Indexing is 0-based (the 1st
	// member is at index 0).
	bool StringAt(int index, CkString &outStr);

	// Returns the string value of the Nth array element. Indexing is 0-based (the 1st
	// member is at index 0).
	const char *stringAt(int index);

	// Returns the type of data at the given index. Possible return values are:
	//     string
	//     number
	//     object
	//     array
	//     boolean
	//     null
	// Returns -1 if no member exists at the given index.
	int TypeAt(int index);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
