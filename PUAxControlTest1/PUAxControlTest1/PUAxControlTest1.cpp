// PUAxControlTest1.cpp : CPUAxControlTest1App および DLL 登録の実装

#include "stdafx.h"
#include "PUAxControlTest1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CPUAxControlTest1App theApp;

const GUID CDECL _tlid = { 0x9B863DD1, 0x56F5, 0x4CFA, { 0xA3, 0x22, 0x9B, 0x39, 0x5C, 0x7A, 0xE8, 0x31 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CPUAxControlTest1App::InitInstance - DLL 初期化

BOOL CPUAxControlTest1App::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: この位置にモジュールの初期化処理コードを追加してください。
	}

	return bInit;
}



// CPUAxControlTest1App::ExitInstance - DLL 終了

int CPUAxControlTest1App::ExitInstance()
{
	// TODO: この位置にモジュールの終了処理を追加してください。

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - エントリをシステム レジストリに追加します。

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - エントリをレジストリから削除します。

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
