#pragma once

// PUAxControlTest1PropPage.h : CPUAxControlTest1PropPage �v���p�e�B �y�[�W �N���X�̐錾�ł��B


// CPUAxControlTest1PropPage : �����Ɋւ��Ă� PUAxControlTest1PropPage.cpp ���Q�Ƃ��Ă��������B

class CPUAxControlTest1PropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CPUAxControlTest1PropPage)
	DECLARE_OLECREATE_EX(CPUAxControlTest1PropPage)

// �R���X�g���N�^�[
public:
	CPUAxControlTest1PropPage();

// �_�C�A���O �f�[�^
	enum { IDD = IDD_PROPPAGE_PUAXCONTROLTEST1 };

// ����
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g

// ���b�Z�[�W �}�b�v
protected:
	DECLARE_MESSAGE_MAP()
};

