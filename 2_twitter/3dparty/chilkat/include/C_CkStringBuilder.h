// This is a generated source file for Chilkat version 9.5.0.59
#ifndef _C_CkStringBuilder_H
#define _C_CkStringBuilder_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC HCkStringBuilder CkStringBuilder_Create(void);
CK_VISIBLE_PUBLIC void CkStringBuilder_Dispose(HCkStringBuilder handle);
CK_VISIBLE_PUBLIC int CkStringBuilder_getLength(HCkStringBuilder cHandle);
CK_VISIBLE_PUBLIC BOOL CkStringBuilder_getUtf8(HCkStringBuilder cHandle);
CK_VISIBLE_PUBLIC void CkStringBuilder_putUtf8(HCkStringBuilder cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkStringBuilder_Append(HCkStringBuilder cHandle, const char *value);
CK_VISIBLE_PUBLIC BOOL CkStringBuilder_AppendEncoded(HCkStringBuilder cHandle, HCkByteData binaryData, const char *encoding);
CK_VISIBLE_PUBLIC BOOL CkStringBuilder_AppendInt(HCkStringBuilder cHandle, int value);
CK_VISIBLE_PUBLIC BOOL CkStringBuilder_AppendInt64(HCkStringBuilder cHandle, __int64 value);
CK_VISIBLE_PUBLIC void CkStringBuilder_Clear(HCkStringBuilder cHandle);
CK_VISIBLE_PUBLIC BOOL CkStringBuilder_Contains(HCkStringBuilder cHandle, const char *str, BOOL caseSensitive);
CK_VISIBLE_PUBLIC BOOL CkStringBuilder_Equals(HCkStringBuilder cHandle, const char *str, BOOL caseSensitive);
CK_VISIBLE_PUBLIC BOOL CkStringBuilder_GetAsString(HCkStringBuilder cHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkStringBuilder_getAsString(HCkStringBuilder cHandle);
CK_VISIBLE_PUBLIC void CkStringBuilder_Replace(HCkStringBuilder cHandle, const char *value, const char *replacement);
#endif
