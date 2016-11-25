// This is a generated source file for Chilkat version 9.5.0.59
#ifndef _C_CkSshTunnel_H
#define _C_CkSshTunnel_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC void CkSshTunnel_setAbortCheck(HCkSshTunnel cHandle, BOOL (*fnAbortCheck)());
CK_VISIBLE_PUBLIC void CkSshTunnel_setPercentDone(HCkSshTunnel cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_VISIBLE_PUBLIC void CkSshTunnel_setProgressInfo(HCkSshTunnel cHandle, void (*fnProgressInfo)(const char *name, const char *value));
CK_VISIBLE_PUBLIC void CkSshTunnel_setTaskCompleted(HCkSshTunnel cHandle, void (*fnTaskCompleted)(HCkTask hTask));

CK_VISIBLE_PUBLIC HCkSshTunnel CkSshTunnel_Create(void);
CK_VISIBLE_PUBLIC void CkSshTunnel_Dispose(HCkSshTunnel handle);
CK_VISIBLE_PUBLIC BOOL CkSshTunnel_getAbortCurrent(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_putAbortCurrent(HCkSshTunnel cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSshTunnel_getAcceptLog(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnel_putAcceptLog(HCkSshTunnel cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_acceptLog(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_getAcceptLogPath(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnel_putAcceptLogPath(HCkSshTunnel cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_acceptLogPath(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC int CkSshTunnel_getConnectTimeoutMs(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_putConnectTimeoutMs(HCkSshTunnel cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSshTunnel_getDebugLogFilePath(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnel_putDebugLogFilePath(HCkSshTunnel cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_debugLogFilePath(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_getDestHostname(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnel_putDestHostname(HCkSshTunnel cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_destHostname(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC int CkSshTunnel_getDestPort(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_putDestPort(HCkSshTunnel cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkSshTunnel_getDynamicPortForwarding(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_putDynamicPortForwarding(HCkSshTunnel cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSshTunnel_getHostKeyFingerprint(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_hostKeyFingerprint(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_getHttpProxyAuthMethod(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnel_putHttpProxyAuthMethod(HCkSshTunnel cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_httpProxyAuthMethod(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_getHttpProxyDomain(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnel_putHttpProxyDomain(HCkSshTunnel cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_httpProxyDomain(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_getHttpProxyHostname(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnel_putHttpProxyHostname(HCkSshTunnel cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_httpProxyHostname(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_getHttpProxyPassword(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnel_putHttpProxyPassword(HCkSshTunnel cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_httpProxyPassword(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC int CkSshTunnel_getHttpProxyPort(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_putHttpProxyPort(HCkSshTunnel cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSshTunnel_getHttpProxyUsername(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnel_putHttpProxyUsername(HCkSshTunnel cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_httpProxyUsername(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC int CkSshTunnel_getIdleTimeoutMs(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_putIdleTimeoutMs(HCkSshTunnel cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSshTunnel_getInboundSocksPassword(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnel_putInboundSocksPassword(HCkSshTunnel cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_inboundSocksPassword(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_getInboundSocksUsername(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnel_putInboundSocksUsername(HCkSshTunnel cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_inboundSocksUsername(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC BOOL CkSshTunnel_getIsAccepting(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC BOOL CkSshTunnel_getKeepAcceptLog(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_putKeepAcceptLog(HCkSshTunnel cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkSshTunnel_getKeepTunnelLog(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_putKeepTunnelLog(HCkSshTunnel cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSshTunnel_getLastErrorHtml(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_lastErrorHtml(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_getLastErrorText(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_lastErrorText(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_getLastErrorXml(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_lastErrorXml(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC BOOL CkSshTunnel_getLastMethodSuccess(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_putLastMethodSuccess(HCkSshTunnel cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSshTunnel_getListenBindIpAddress(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnel_putListenBindIpAddress(HCkSshTunnel cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_listenBindIpAddress(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC int CkSshTunnel_getListenPort(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_getOutboundBindIpAddress(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnel_putOutboundBindIpAddress(HCkSshTunnel cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_outboundBindIpAddress(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC int CkSshTunnel_getOutboundBindPort(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_putOutboundBindPort(HCkSshTunnel cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSshTunnel_getSocksHostname(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnel_putSocksHostname(HCkSshTunnel cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_socksHostname(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_getSocksPassword(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnel_putSocksPassword(HCkSshTunnel cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_socksPassword(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC int CkSshTunnel_getSocksPort(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_putSocksPort(HCkSshTunnel cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSshTunnel_getSocksUsername(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnel_putSocksUsername(HCkSshTunnel cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_socksUsername(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC int CkSshTunnel_getSocksVersion(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_putSocksVersion(HCkSshTunnel cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSshTunnel_getSoRcvBuf(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_putSoRcvBuf(HCkSshTunnel cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSshTunnel_getSoSndBuf(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_putSoSndBuf(HCkSshTunnel cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkSshTunnel_getTcpNoDelay(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_putTcpNoDelay(HCkSshTunnel cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSshTunnel_getTunnelLog(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnel_putTunnelLog(HCkSshTunnel cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_tunnelLog(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_getTunnelLogPath(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnel_putTunnelLogPath(HCkSshTunnel cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_tunnelLogPath(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC BOOL CkSshTunnel_getUtf8(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_putUtf8(HCkSshTunnel cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkSshTunnel_getVerboseLogging(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnel_putVerboseLogging(HCkSshTunnel cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSshTunnel_getVersion(HCkSshTunnel cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSshTunnel_version(HCkSshTunnel cHandle);
CK_VISIBLE_PUBLIC BOOL CkSshTunnel_AuthenticatePk(HCkSshTunnel cHandle, const char *username, HCkSshKey privateKey);
CK_VISIBLE_PUBLIC HCkTask CkSshTunnel_AuthenticatePkAsync(HCkSshTunnel cHandle, const char *username, HCkSshKey privateKey);
CK_VISIBLE_PUBLIC BOOL CkSshTunnel_AuthenticatePw(HCkSshTunnel cHandle, const char *login, const char *password);
CK_VISIBLE_PUBLIC HCkTask CkSshTunnel_AuthenticatePwAsync(HCkSshTunnel cHandle, const char *login, const char *password);
CK_VISIBLE_PUBLIC BOOL CkSshTunnel_AuthenticatePwPk(HCkSshTunnel cHandle, const char *username, const char *password, HCkSshKey privateKey);
CK_VISIBLE_PUBLIC HCkTask CkSshTunnel_AuthenticatePwPkAsync(HCkSshTunnel cHandle, const char *username, const char *password, HCkSshKey privateKey);
CK_VISIBLE_PUBLIC BOOL CkSshTunnel_BeginAccepting(HCkSshTunnel cHandle, int listenPort);
CK_VISIBLE_PUBLIC HCkTask CkSshTunnel_BeginAcceptingAsync(HCkSshTunnel cHandle, int listenPort);
CK_VISIBLE_PUBLIC BOOL CkSshTunnel_CloseTunnel(HCkSshTunnel cHandle, BOOL waitForThreads);
CK_VISIBLE_PUBLIC BOOL CkSshTunnel_Connect(HCkSshTunnel cHandle, const char *hostname, int port);
CK_VISIBLE_PUBLIC HCkTask CkSshTunnel_ConnectAsync(HCkSshTunnel cHandle, const char *hostname, int port);
CK_VISIBLE_PUBLIC BOOL CkSshTunnel_ConnectThroughSsh(HCkSshTunnel cHandle, HCkSsh ssh, const char *hostname, int port);
CK_VISIBLE_PUBLIC HCkTask CkSshTunnel_ConnectThroughSshAsync(HCkSshTunnel cHandle, HCkSsh ssh, const char *hostname, int port);
CK_VISIBLE_PUBLIC BOOL CkSshTunnel_DisconnectAllClients(HCkSshTunnel cHandle, BOOL waitForThreads);
CK_VISIBLE_PUBLIC BOOL CkSshTunnel_SaveLastError(HCkSshTunnel cHandle, const char *path);
CK_VISIBLE_PUBLIC BOOL CkSshTunnel_StopAccepting(HCkSshTunnel cHandle, BOOL waitForThread);
CK_VISIBLE_PUBLIC BOOL CkSshTunnel_UnlockComponent(HCkSshTunnel cHandle, const char *unlockCode);
#endif
