// This is a generated source file for Chilkat version 9.5.0.59
#ifndef _C_CkRsa_H
#define _C_CkRsa_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC HCkRsa CkRsa_Create(void);
CK_VISIBLE_PUBLIC void CkRsa_Dispose(HCkRsa handle);
CK_VISIBLE_PUBLIC void CkRsa_getCharset(HCkRsa cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkRsa_putCharset(HCkRsa cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkRsa_charset(HCkRsa cHandle);
CK_VISIBLE_PUBLIC void CkRsa_getDebugLogFilePath(HCkRsa cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkRsa_putDebugLogFilePath(HCkRsa cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkRsa_debugLogFilePath(HCkRsa cHandle);
CK_VISIBLE_PUBLIC void CkRsa_getEncodingMode(HCkRsa cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkRsa_putEncodingMode(HCkRsa cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkRsa_encodingMode(HCkRsa cHandle);
CK_VISIBLE_PUBLIC void CkRsa_getLastErrorHtml(HCkRsa cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkRsa_lastErrorHtml(HCkRsa cHandle);
CK_VISIBLE_PUBLIC void CkRsa_getLastErrorText(HCkRsa cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkRsa_lastErrorText(HCkRsa cHandle);
CK_VISIBLE_PUBLIC void CkRsa_getLastErrorXml(HCkRsa cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkRsa_lastErrorXml(HCkRsa cHandle);
CK_VISIBLE_PUBLIC BOOL CkRsa_getLastMethodSuccess(HCkRsa cHandle);
CK_VISIBLE_PUBLIC void CkRsa_putLastMethodSuccess(HCkRsa cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkRsa_getLittleEndian(HCkRsa cHandle);
CK_VISIBLE_PUBLIC void CkRsa_putLittleEndian(HCkRsa cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkRsa_getNoUnpad(HCkRsa cHandle);
CK_VISIBLE_PUBLIC void CkRsa_putNoUnpad(HCkRsa cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkRsa_getNumBits(HCkRsa cHandle);
CK_VISIBLE_PUBLIC void CkRsa_getOaepHash(HCkRsa cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkRsa_putOaepHash(HCkRsa cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkRsa_oaepHash(HCkRsa cHandle);
CK_VISIBLE_PUBLIC BOOL CkRsa_getOaepPadding(HCkRsa cHandle);
CK_VISIBLE_PUBLIC void CkRsa_putOaepPadding(HCkRsa cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkRsa_getUtf8(HCkRsa cHandle);
CK_VISIBLE_PUBLIC void CkRsa_putUtf8(HCkRsa cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkRsa_getVerboseLogging(HCkRsa cHandle);
CK_VISIBLE_PUBLIC void CkRsa_putVerboseLogging(HCkRsa cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkRsa_getVersion(HCkRsa cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkRsa_version(HCkRsa cHandle);
CK_VISIBLE_PUBLIC BOOL CkRsa_DecryptBytes(HCkRsa cHandle, HCkByteData inData, BOOL usePrivateKey, HCkByteData outData);
CK_VISIBLE_PUBLIC BOOL CkRsa_DecryptBytesENC(HCkRsa cHandle, const char *str, BOOL bUsePrivateKey, HCkByteData outData);
CK_VISIBLE_PUBLIC BOOL CkRsa_DecryptString(HCkRsa cHandle, HCkByteData binarySig, BOOL usePrivateKey, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkRsa_decryptString(HCkRsa cHandle, HCkByteData binarySig, BOOL usePrivateKey);
CK_VISIBLE_PUBLIC BOOL CkRsa_DecryptStringENC(HCkRsa cHandle, const char *encodedSig, BOOL usePrivateKey, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkRsa_decryptStringENC(HCkRsa cHandle, const char *encodedSig, BOOL usePrivateKey);
CK_VISIBLE_PUBLIC BOOL CkRsa_EncryptBytes(HCkRsa cHandle, HCkByteData binaryData, BOOL usePrivateKey, HCkByteData outData);
CK_VISIBLE_PUBLIC BOOL CkRsa_EncryptBytesENC(HCkRsa cHandle, HCkByteData data, BOOL bUsePrivateKey, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkRsa_encryptBytesENC(HCkRsa cHandle, HCkByteData data, BOOL bUsePrivateKey);
CK_VISIBLE_PUBLIC BOOL CkRsa_EncryptString(HCkRsa cHandle, const char *stringToEncrypt, BOOL usePrivateKey, HCkByteData outData);
CK_VISIBLE_PUBLIC BOOL CkRsa_EncryptStringENC(HCkRsa cHandle, const char *str, BOOL bUsePrivateKey, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkRsa_encryptStringENC(HCkRsa cHandle, const char *str, BOOL bUsePrivateKey);
CK_VISIBLE_PUBLIC BOOL CkRsa_ExportPrivateKey(HCkRsa cHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkRsa_exportPrivateKey(HCkRsa cHandle);
CK_VISIBLE_PUBLIC HCkPrivateKey CkRsa_ExportPrivateKeyObj(HCkRsa cHandle);
CK_VISIBLE_PUBLIC BOOL CkRsa_ExportPublicKey(HCkRsa cHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkRsa_exportPublicKey(HCkRsa cHandle);
CK_VISIBLE_PUBLIC HCkPublicKey CkRsa_ExportPublicKeyObj(HCkRsa cHandle);
CK_VISIBLE_PUBLIC BOOL CkRsa_GenerateKey(HCkRsa cHandle, int numBits);
CK_VISIBLE_PUBLIC BOOL CkRsa_ImportPrivateKey(HCkRsa cHandle, const char *xmlKey);
CK_VISIBLE_PUBLIC BOOL CkRsa_ImportPrivateKeyObj(HCkRsa cHandle, HCkPrivateKey key);
CK_VISIBLE_PUBLIC BOOL CkRsa_ImportPublicKey(HCkRsa cHandle, const char *xmlKey);
CK_VISIBLE_PUBLIC BOOL CkRsa_ImportPublicKeyObj(HCkRsa cHandle, HCkPublicKey key);
CK_VISIBLE_PUBLIC BOOL CkRsa_OpenSslSignBytes(HCkRsa cHandle, HCkByteData data, HCkByteData outBytes);
CK_VISIBLE_PUBLIC BOOL CkRsa_OpenSslSignBytesENC(HCkRsa cHandle, HCkByteData data, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkRsa_openSslSignBytesENC(HCkRsa cHandle, HCkByteData data);
CK_VISIBLE_PUBLIC BOOL CkRsa_OpenSslSignString(HCkRsa cHandle, const char *str, HCkByteData outBytes);
CK_VISIBLE_PUBLIC BOOL CkRsa_OpenSslSignStringENC(HCkRsa cHandle, const char *str, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkRsa_openSslSignStringENC(HCkRsa cHandle, const char *str);
CK_VISIBLE_PUBLIC BOOL CkRsa_OpenSslVerifyBytes(HCkRsa cHandle, HCkByteData signature, HCkByteData outBytes);
CK_VISIBLE_PUBLIC BOOL CkRsa_OpenSslVerifyBytesENC(HCkRsa cHandle, const char *str, HCkByteData outBytes);
CK_VISIBLE_PUBLIC BOOL CkRsa_OpenSslVerifyString(HCkRsa cHandle, HCkByteData data, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkRsa_openSslVerifyString(HCkRsa cHandle, HCkByteData data);
CK_VISIBLE_PUBLIC BOOL CkRsa_OpenSslVerifyStringENC(HCkRsa cHandle, const char *str, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkRsa_openSslVerifyStringENC(HCkRsa cHandle, const char *str);
CK_VISIBLE_PUBLIC BOOL CkRsa_SaveLastError(HCkRsa cHandle, const char *path);
CK_VISIBLE_PUBLIC BOOL CkRsa_SignBytes(HCkRsa cHandle, HCkByteData binaryData, const char *hashAlgorithm, HCkByteData outData);
CK_VISIBLE_PUBLIC BOOL CkRsa_SignBytesENC(HCkRsa cHandle, HCkByteData binaryData, const char *hashAlgorithm, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkRsa_signBytesENC(HCkRsa cHandle, HCkByteData binaryData, const char *hashAlgorithm);
CK_VISIBLE_PUBLIC BOOL CkRsa_SignHash(HCkRsa cHandle, HCkByteData hashBytes, const char *hashAlg, HCkByteData outBytes);
CK_VISIBLE_PUBLIC BOOL CkRsa_SignHashENC(HCkRsa cHandle, const char *encodedHash, const char *hashAlg, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkRsa_signHashENC(HCkRsa cHandle, const char *encodedHash, const char *hashAlg);
CK_VISIBLE_PUBLIC BOOL CkRsa_SignString(HCkRsa cHandle, const char *strToBeHashed, const char *hashAlgorithm, HCkByteData outData);
CK_VISIBLE_PUBLIC BOOL CkRsa_SignStringENC(HCkRsa cHandle, const char *strToBeHashed, const char *hashAlgorithm, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkRsa_signStringENC(HCkRsa cHandle, const char *strToBeHashed, const char *hashAlgorithm);
CK_VISIBLE_PUBLIC BOOL CkRsa_SnkToXml(HCkRsa cHandle, const char *filename, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkRsa_snkToXml(HCkRsa cHandle, const char *filename);
CK_VISIBLE_PUBLIC BOOL CkRsa_UnlockComponent(HCkRsa cHandle, const char *unlockCode);
CK_VISIBLE_PUBLIC BOOL CkRsa_VerifyBytes(HCkRsa cHandle, HCkByteData originalData, const char *hashAlgorithm, HCkByteData signatureBytes);
CK_VISIBLE_PUBLIC BOOL CkRsa_VerifyBytesENC(HCkRsa cHandle, HCkByteData originalData, const char *hashAlgorithm, const char *encodedSig);
CK_VISIBLE_PUBLIC BOOL CkRsa_VerifyHash(HCkRsa cHandle, HCkByteData hashBytes, const char *hashAlg, HCkByteData sigBytes);
CK_VISIBLE_PUBLIC BOOL CkRsa_VerifyHashENC(HCkRsa cHandle, const char *encodedHash, const char *hashAlg, const char *encodedSig);
CK_VISIBLE_PUBLIC BOOL CkRsa_VerifyPrivateKey(HCkRsa cHandle, const char *xml);
CK_VISIBLE_PUBLIC BOOL CkRsa_VerifyString(HCkRsa cHandle, const char *originalString, const char *hashAlgorithm, HCkByteData binarySig);
CK_VISIBLE_PUBLIC BOOL CkRsa_VerifyStringENC(HCkRsa cHandle, const char *originalString, const char *hashAlgorithm, const char *encodedSig);
#endif
