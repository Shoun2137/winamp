#ifndef NULLSOFT_WINAMP_OMSTORAGETYPE_WEB_INTERFACE_HEADER
#define NULLSOFT_WINAMP_OMSTORAGETYPE_WEB_INTERFACE_HEADER

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

// {FC4BD6AA-F2BD-46dd-B5AD-0F5B38950AEF}
static const GUID STID_OmWebStorage = 
{ 0xfc4bd6aa, 0xf2bd, 0x46dd, { 0xb5, 0xad, 0xf, 0x5b, 0x38, 0x95, 0xa, 0xef } };

// {BA2DB1CF-9056-41a3-A9E9-0D6015FFA159}
static const GUID SUID_OmStorageUrl = 
{ 0xba2db1cf, 0x9056, 0x41a3, { 0xa9, 0xe9, 0xd, 0x60, 0x15, 0xff, 0xa1, 0x59 } };

#include <ifc_omstorage.h>

#define IFC_OmWebStorage STID_OmWebStorage

#define E_DWNLD_OK				S_OK
#define E_DWNLD_BUSY			E_PENDING
#define E_DWNLD_FAIL			E_FAIL
#define E_DWNLD_ABORT			E_ABORT
#define E_DWNLD_TIMEOUT			HRESULT_FROM_WIN32(ERROR_TIMEOUT)
#define E_DWNLD_CANT_CONNECT	HRESULT_FROM_WIN32(ERROR_NOT_CONNECTED)
#define E_DWNLD_WRITE_ERROR		HRESULT_FROM_WIN32(ERROR_WRITE_FAULT)

#endif //NULLSOFT_WINAMP_OMSTORAGETYPE_WEB_INTERFACE_HEADER