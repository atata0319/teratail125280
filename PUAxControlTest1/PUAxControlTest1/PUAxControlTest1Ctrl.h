#pragma once

// PUAxControlTest1Ctrl.h : CPUAxControlTest1Ctrl ActiveX �R���g���[�� �N���X�̐錾�ł��B


// CPUAxControlTest1Ctrl : �����Ɋւ��Ă� PUAxControlTest1Ctrl.cpp ���Q�Ƃ��Ă��������B

class CPUAxControlTest1Ctrl : public COleControl
{
	DECLARE_DYNCREATE(CPUAxControlTest1Ctrl)

// �R���X�g���N�^�[
public:
	CPUAxControlTest1Ctrl();

// �I�[�o�[���C�h
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// ����
protected:
	~CPUAxControlTest1Ctrl();

	DECLARE_OLECREATE_EX(CPUAxControlTest1Ctrl)    // �N���X �t�@�N�g�� �� guid
	DECLARE_OLETYPELIB(CPUAxControlTest1Ctrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CPUAxControlTest1Ctrl)     // �v���p�e�B �y�[�W ID
	DECLARE_OLECTLTYPE(CPUAxControlTest1Ctrl)		// �^�C�v���Ƃ��̑��̃X�e�[�^�X

	// �T�u�N���X�����ꂽ�R���g���[���̃T�|�[�g
	BOOL IsSubclassedControl();
	LRESULT OnOcmCommand(WPARAM wParam, LPARAM lParam);

// ���b�Z�[�W �}�b�v
	DECLARE_MESSAGE_MAP()

// �f�B�X�p�b�` �}�b�v
	DECLARE_DISPATCH_MAP()

// �C�x���g �}�b�v
	DECLARE_EVENT_MAP()

// �f�B�X�p�b�` �� �C�x���g ID
public:
	enum {
	};
};

