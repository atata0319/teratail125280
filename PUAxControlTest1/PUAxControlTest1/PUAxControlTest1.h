#pragma once

// PUAxControlTest1.h : PUAxControlTest1.DLL �̃��C�� �w�b�_�[ �t�@�C��

#if !defined( __AFXCTL_H__ )
#error "���̃t�@�C�����C���N���[�h����O�� 'afxctl.h' ���C���N���[�h���Ă��������B"
#endif

#include "resource.h"       // ���C�� �V���{��


// CPUAxControlTest1App : �����Ɋւ��Ă� PUAxControlTest1.cpp ���Q�Ƃ��Ă��������B

class CPUAxControlTest1App : public COleControlModule
{
public:
	BOOL InitInstance();
	int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

