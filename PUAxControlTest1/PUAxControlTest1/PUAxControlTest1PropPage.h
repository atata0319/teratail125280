#pragma once

// PUAxControlTest1PropPage.h : CPUAxControlTest1PropPage プロパティ ページ クラスの宣言です。


// CPUAxControlTest1PropPage : 実装に関しては PUAxControlTest1PropPage.cpp を参照してください。

class CPUAxControlTest1PropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CPUAxControlTest1PropPage)
	DECLARE_OLECREATE_EX(CPUAxControlTest1PropPage)

// コンストラクター
public:
	CPUAxControlTest1PropPage();

// ダイアログ データ
	enum { IDD = IDD_PROPPAGE_PUAXCONTROLTEST1 };

// 実装
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV サポート

// メッセージ マップ
protected:
	DECLARE_MESSAGE_MAP()
};

