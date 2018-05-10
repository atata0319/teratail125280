// PUAxControlTest1PropPage.cpp : CPUAxControlTest1PropPage プロパティ ページ クラスの実装

#include "stdafx.h"
#include "PUAxControlTest1.h"
#include "PUAxControlTest1PropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CPUAxControlTest1PropPage, COlePropertyPage)

// メッセージ マップ

BEGIN_MESSAGE_MAP(CPUAxControlTest1PropPage, COlePropertyPage)
END_MESSAGE_MAP()

// クラス ファクトリおよび GUID を初期化します。

IMPLEMENT_OLECREATE_EX(CPUAxControlTest1PropPage, "PUAXCONTROLTES.PUAxControlTesPropPage.1",
	0x8b3de5ed, 0x5cae, 0x4b23, 0x91, 0x2e, 0xbd, 0x83, 0xa, 0xdb, 0x89, 0xfa)

// CPUAxControlTest1PropPage::CPUAxControlTest1PropPageFactory::UpdateRegistry -
// CPUAxControlTest1PropPage のシステム レジストリ エントリを追加または削除します。

BOOL CPUAxControlTest1PropPage::CPUAxControlTest1PropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_PUAXCONTROLTEST1_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}

// CPUAxControlTest1PropPage::CPUAxControlTest1PropPage - コンストラクター

CPUAxControlTest1PropPage::CPUAxControlTest1PropPage() :
	COlePropertyPage(IDD, IDS_PUAXCONTROLTEST1_PPG_CAPTION)
{
}

// CPUAxControlTest1PropPage::DoDataExchange - ページおよびプロパティ間でデータを移動します。

void CPUAxControlTest1PropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CPUAxControlTest1PropPage メッセージ ハンドラー
