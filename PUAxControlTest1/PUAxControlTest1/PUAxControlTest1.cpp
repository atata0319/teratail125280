// PUAxControlTest1.cpp : CPUAxControlTest1App ����� DLL �o�^�̎���

#include "stdafx.h"
#include "PUAxControlTest1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CPUAxControlTest1App theApp;

const GUID CDECL _tlid = { 0x9B863DD1, 0x56F5, 0x4CFA, { 0xA3, 0x22, 0x9B, 0x39, 0x5C, 0x7A, 0xE8, 0x31 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CPUAxControlTest1App::InitInstance - DLL ������

BOOL CPUAxControlTest1App::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: ���̈ʒu�Ƀ��W���[���̏����������R�[�h��ǉ����Ă��������B
	}

	return bInit;
}



// CPUAxControlTest1App::ExitInstance - DLL �I��

int CPUAxControlTest1App::ExitInstance()
{
	// TODO: ���̈ʒu�Ƀ��W���[���̏I��������ǉ����Ă��������B

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - �G���g�����V�X�e�� ���W�X�g���ɒǉ����܂��B

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - �G���g�������W�X�g������폜���܂��B

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
