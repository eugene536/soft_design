// This is a generated source file for Chilkat version 9.5.0.59
#ifndef _C_CkStringBuilderWH
#define _C_CkStringBuilderWH
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC HCkStringBuilderW CkStringBuilderW_Create(void);
CK_VISIBLE_PUBLIC void CkStringBuilderW_Dispose(HCkStringBuilderW handle);
CK_VISIBLE_PUBLIC int CkStringBuilderW_getLength(HCkStringBuilderW cHandle);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_Append(HCkStringBuilderW cHandle, const wchar_t *value);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_AppendEncoded(HCkStringBuilderW cHandle, HCkByteData binaryData, const wchar_t *encoding);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_AppendInt(HCkStringBuilderW cHandle, int value);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_AppendInt64(HCkStringBuilderW cHandle, __int64 value);
CK_VISIBLE_PUBLIC void CkStringBuilderW_Clear(HCkStringBuilderW cHandle);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_Contains(HCkStringBuilderW cHandle, const wchar_t *str, BOOL caseSensitive);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_Equals(HCkStringBuilderW cHandle, const wchar_t *str, BOOL caseSensitive);
CK_VISIBLE_PUBLIC BOOL CkStringBuilderW_GetAsString(HCkStringBuilderW cHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkStringBuilderW_getAsString(HCkStringBuilderW cHandle);
CK_VISIBLE_PUBLIC void CkStringBuilderW_Replace(HCkStringBuilderW cHandle, const wchar_t *value, const wchar_t *replacement);
#endif
