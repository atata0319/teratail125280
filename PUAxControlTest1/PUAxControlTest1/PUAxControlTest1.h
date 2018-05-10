#pragma once

// PUAxControlTest1.h : PUAxControlTest1.DLL のメイン ヘッダー ファイル

#if !defined( __AFXCTL_H__ )
#error "このファイルをインクルードする前に 'afxctl.h' をインクルードしてください。"
#endif

#include "resource.h"       // メイン シンボル


// CPUAxControlTest1App : 実装に関しては PUAxControlTest1.cpp を参照してください。

class CPUAxControlTest1App : public COleControlModule
{
public:
	BOOL InitInstance();
	int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

