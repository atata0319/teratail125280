// PUAxControlTest1Ctrl.cpp :  CPUAxControlTest1Ctrl ActiveX コントロール クラスの実装

#include "stdafx.h"
#include "PUAxControlTest1.h"
#include "PUAxControlTest1Ctrl.h"
#include "PUAxControlTest1PropPage.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CPUAxControlTest1Ctrl, COleControl)

// メッセージ マップ

BEGIN_MESSAGE_MAP(CPUAxControlTest1Ctrl, COleControl)
	ON_MESSAGE(OCM_COMMAND, &CPUAxControlTest1Ctrl::OnOcmCommand)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()

// ディスパッチ マップ

BEGIN_DISPATCH_MAP(CPUAxControlTest1Ctrl, COleControl)
END_DISPATCH_MAP()

// イベント マップ

BEGIN_EVENT_MAP(CPUAxControlTest1Ctrl, COleControl)
END_EVENT_MAP()

// プロパティ ページ

// TODO: プロパティ ページを追加して、BEGIN 行の最後にあるカウントを増やしてください。
BEGIN_PROPPAGEIDS(CPUAxControlTest1Ctrl, 1)
	PROPPAGEID(CPUAxControlTest1PropPage::guid)
END_PROPPAGEIDS(CPUAxControlTest1Ctrl)

// クラス ファクトリおよび GUID を初期化します。

IMPLEMENT_OLECREATE_EX(CPUAxControlTest1Ctrl, "PUAXCONTROLTEST1.PUAxControlTest1Ctrl.1",
	0x83f0e680, 0xc802, 0x4532, 0x80, 0x98, 0x5f, 0xba, 0x4c, 0x90, 0xc, 0x8f)

// タイプ ライブラリ ID およびバージョン

IMPLEMENT_OLETYPELIB(CPUAxControlTest1Ctrl, _tlid, _wVerMajor, _wVerMinor)

// インターフェイス ID

const IID IID_DPUAxControlTest1 = { 0xB938336C, 0x9D16, 0x4E46, { 0xBC, 0x5A, 0x39, 0x21, 0x6F, 0xD2, 0xF9, 0x7A } };
const IID IID_DPUAxControlTest1Events = { 0x75C0DE38, 0xFBAD, 0x42F4, { 0x95, 0xF, 0xD4, 0xF8, 0x93, 0xE7, 0x7F, 0x75 } };

// コントロールの種類の情報

static const DWORD _dwPUAxControlTest1OleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CPUAxControlTest1Ctrl, IDS_PUAXCONTROLTEST1, _dwPUAxControlTest1OleMisc)

// CPUAxControlTest1Ctrl::CPUAxControlTest1CtrlFactory::UpdateRegistry -
// CPUAxControlTest1Ctrl のシステム レジストリ エントリを追加または削除します。

BOOL CPUAxControlTest1Ctrl::CPUAxControlTest1CtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: コントロールが apartment モデルのスレッド処理の規則に従っていることを
	// 確認してください。詳細については MFC のテクニカル ノート 64 を参照してください。
	// アパートメント モデルのスレッド処理の規則に従わないコントロールの場合は、6 番目
	// のパラメーターを以下のように変更してください。
	// afxRegApartmentThreading を 0 に設定します。

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_PUAXCONTROLTEST1,
			IDB_PUAXCONTROLTEST1,
			afxRegApartmentThreading,
			_dwPUAxControlTest1OleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


// CPUAxControlTest1Ctrl::CPUAxControlTest1Ctrl - コンストラクター

CPUAxControlTest1Ctrl::CPUAxControlTest1Ctrl()
{
	InitializeIIDs(&IID_DPUAxControlTest1, &IID_DPUAxControlTest1Events);
	// TODO: この位置にコントロールのインスタンス データの初期化処理を追加してください
}

// CPUAxControlTest1Ctrl::~CPUAxControlTest1Ctrl - デストラクター

CPUAxControlTest1Ctrl::~CPUAxControlTest1Ctrl()
{
	// TODO: この位置にコントロールのインスタンス データの後処理用のコードを追加してください
}

// CPUAxControlTest1Ctrl::OnDraw - 描画関数

void CPUAxControlTest1Ctrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& /* rcInvalid */)
{
	if (!pdc)
		return;

	DoSuperclassPaint(pdc, rcBounds);

	RECT rc = rcBounds;
	pdc->DrawText(CString(L"Per User ActiveX Test"), &rc, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
}

// CPUAxControlTest1Ctrl::DoPropExchange - 永続性のサポート

void CPUAxControlTest1Ctrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: 永続属性を持つ各カスタム プロパティ用の PX_ 関数を呼び出します。
}


// CPUAxControlTest1Ctrl::OnResetState - コントロールを既定の状態にリセットします。

void CPUAxControlTest1Ctrl::OnResetState()
{
	COleControl::OnResetState();  // DoPropExchange を呼び出して既定値にリセット

	// TODO: この位置にコントロールの状態をリセットする処理を追加してください
}


// CPUAxControlTest1Ctrl::PreCreateWindow - CreateWindowEx のパラメーターを変更します。

BOOL CPUAxControlTest1Ctrl::PreCreateWindow(CREATESTRUCT& cs)
{
	cs.lpszClass = _T("STATIC");
	BOOL bRet = COleControl::PreCreateWindow(cs);
	cs.hMenu = NULL;
	return bRet;
}

// CPUAxControlTest1Ctrl::IsSubclassedControl - これはサブクラス コントロールです。

BOOL CPUAxControlTest1Ctrl::IsSubclassedControl()
{
	return TRUE;
}

// CPUAxControlTest1Ctrl::OnOcmCommand - コマンド メッセージを処理します。

LRESULT CPUAxControlTest1Ctrl::OnOcmCommand(WPARAM wParam, LPARAM lParam)
{
	WORD wNotifyCode = HIWORD(wParam);

	// TODO: この位置にスイッチ ステートメントで wNotifyCode を処理するコードを追加してください

	return 0;
}


// CPUAxControlTest1Ctrl メッセージ ハンドラー
