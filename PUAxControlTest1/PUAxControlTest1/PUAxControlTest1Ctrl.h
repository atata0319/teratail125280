#pragma once

// PUAxControlTest1Ctrl.h : CPUAxControlTest1Ctrl ActiveX コントロール クラスの宣言です。


// CPUAxControlTest1Ctrl : 実装に関しては PUAxControlTest1Ctrl.cpp を参照してください。

class CPUAxControlTest1Ctrl : public COleControl
{
	DECLARE_DYNCREATE(CPUAxControlTest1Ctrl)

// コンストラクター
public:
	CPUAxControlTest1Ctrl();

// オーバーライド
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// 実装
protected:
	~CPUAxControlTest1Ctrl();

	DECLARE_OLECREATE_EX(CPUAxControlTest1Ctrl)    // クラス ファクトリ と guid
	DECLARE_OLETYPELIB(CPUAxControlTest1Ctrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CPUAxControlTest1Ctrl)     // プロパティ ページ ID
	DECLARE_OLECTLTYPE(CPUAxControlTest1Ctrl)		// タイプ名とその他のステータス

	// サブクラス化されたコントロールのサポート
	BOOL IsSubclassedControl();
	LRESULT OnOcmCommand(WPARAM wParam, LPARAM lParam);

// メッセージ マップ
	DECLARE_MESSAGE_MAP()

// ディスパッチ マップ
	DECLARE_DISPATCH_MAP()

// イベント マップ
	DECLARE_EVENT_MAP()

// ディスパッチ と イベント ID
public:
	enum {
	};
};

