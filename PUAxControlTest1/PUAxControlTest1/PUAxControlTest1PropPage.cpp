// PUAxControlTest1PropPage.cpp : CPUAxControlTest1PropPage �v���p�e�B �y�[�W �N���X�̎���

#include "stdafx.h"
#include "PUAxControlTest1.h"
#include "PUAxControlTest1PropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CPUAxControlTest1PropPage, COlePropertyPage)

// ���b�Z�[�W �}�b�v

BEGIN_MESSAGE_MAP(CPUAxControlTest1PropPage, COlePropertyPage)
END_MESSAGE_MAP()

// �N���X �t�@�N�g������� GUID �����������܂��B

IMPLEMENT_OLECREATE_EX(CPUAxControlTest1PropPage, "PUAXCONTROLTES.PUAxControlTesPropPage.1",
	0x8b3de5ed, 0x5cae, 0x4b23, 0x91, 0x2e, 0xbd, 0x83, 0xa, 0xdb, 0x89, 0xfa)

// CPUAxControlTest1PropPage::CPUAxControlTest1PropPageFactory::UpdateRegistry -
// CPUAxControlTest1PropPage �̃V�X�e�� ���W�X�g�� �G���g����ǉ��܂��͍폜���܂��B

BOOL CPUAxControlTest1PropPage::CPUAxControlTest1PropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_PUAXCONTROLTEST1_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}

// CPUAxControlTest1PropPage::CPUAxControlTest1PropPage - �R���X�g���N�^�[

CPUAxControlTest1PropPage::CPUAxControlTest1PropPage() :
	COlePropertyPage(IDD, IDS_PUAXCONTROLTEST1_PPG_CAPTION)
{
}

// CPUAxControlTest1PropPage::DoDataExchange - �y�[�W����уv���p�e�B�ԂŃf�[�^���ړ����܂��B

void CPUAxControlTest1PropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CPUAxControlTest1PropPage ���b�Z�[�W �n���h���[
