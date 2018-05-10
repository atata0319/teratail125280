// PUAxControlTest1Ctrl.cpp :  CPUAxControlTest1Ctrl ActiveX �R���g���[�� �N���X�̎���

#include "stdafx.h"
#include "PUAxControlTest1.h"
#include "PUAxControlTest1Ctrl.h"
#include "PUAxControlTest1PropPage.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CPUAxControlTest1Ctrl, COleControl)

// ���b�Z�[�W �}�b�v

BEGIN_MESSAGE_MAP(CPUAxControlTest1Ctrl, COleControl)
	ON_MESSAGE(OCM_COMMAND, &CPUAxControlTest1Ctrl::OnOcmCommand)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()

// �f�B�X�p�b�` �}�b�v

BEGIN_DISPATCH_MAP(CPUAxControlTest1Ctrl, COleControl)
END_DISPATCH_MAP()

// �C�x���g �}�b�v

BEGIN_EVENT_MAP(CPUAxControlTest1Ctrl, COleControl)
END_EVENT_MAP()

// �v���p�e�B �y�[�W

// TODO: �v���p�e�B �y�[�W��ǉ����āABEGIN �s�̍Ō�ɂ���J�E���g�𑝂₵�Ă��������B
BEGIN_PROPPAGEIDS(CPUAxControlTest1Ctrl, 1)
	PROPPAGEID(CPUAxControlTest1PropPage::guid)
END_PROPPAGEIDS(CPUAxControlTest1Ctrl)

// �N���X �t�@�N�g������� GUID �����������܂��B

IMPLEMENT_OLECREATE_EX(CPUAxControlTest1Ctrl, "PUAXCONTROLTEST1.PUAxControlTest1Ctrl.1",
	0x83f0e680, 0xc802, 0x4532, 0x80, 0x98, 0x5f, 0xba, 0x4c, 0x90, 0xc, 0x8f)

// �^�C�v ���C�u���� ID ����уo�[�W����

IMPLEMENT_OLETYPELIB(CPUAxControlTest1Ctrl, _tlid, _wVerMajor, _wVerMinor)

// �C���^�[�t�F�C�X ID

const IID IID_DPUAxControlTest1 = { 0xB938336C, 0x9D16, 0x4E46, { 0xBC, 0x5A, 0x39, 0x21, 0x6F, 0xD2, 0xF9, 0x7A } };
const IID IID_DPUAxControlTest1Events = { 0x75C0DE38, 0xFBAD, 0x42F4, { 0x95, 0xF, 0xD4, 0xF8, 0x93, 0xE7, 0x7F, 0x75 } };

// �R���g���[���̎�ނ̏��

static const DWORD _dwPUAxControlTest1OleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CPUAxControlTest1Ctrl, IDS_PUAXCONTROLTEST1, _dwPUAxControlTest1OleMisc)

// CPUAxControlTest1Ctrl::CPUAxControlTest1CtrlFactory::UpdateRegistry -
// CPUAxControlTest1Ctrl �̃V�X�e�� ���W�X�g�� �G���g����ǉ��܂��͍폜���܂��B

BOOL CPUAxControlTest1Ctrl::CPUAxControlTest1CtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: �R���g���[���� apartment ���f���̃X���b�h�����̋K���ɏ]���Ă��邱�Ƃ�
	// �m�F���Ă��������B�ڍׂɂ��Ă� MFC �̃e�N�j�J�� �m�[�g 64 ���Q�Ƃ��Ă��������B
	// �A�p�[�g�����g ���f���̃X���b�h�����̋K���ɏ]��Ȃ��R���g���[���̏ꍇ�́A6 �Ԗ�
	// �̃p�����[�^�[���ȉ��̂悤�ɕύX���Ă��������B
	// afxRegApartmentThreading �� 0 �ɐݒ肵�܂��B

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


// CPUAxControlTest1Ctrl::CPUAxControlTest1Ctrl - �R���X�g���N�^�[

CPUAxControlTest1Ctrl::CPUAxControlTest1Ctrl()
{
	InitializeIIDs(&IID_DPUAxControlTest1, &IID_DPUAxControlTest1Events);
	// TODO: ���̈ʒu�ɃR���g���[���̃C���X�^���X �f�[�^�̏�����������ǉ����Ă�������
}

// CPUAxControlTest1Ctrl::~CPUAxControlTest1Ctrl - �f�X�g���N�^�[

CPUAxControlTest1Ctrl::~CPUAxControlTest1Ctrl()
{
	// TODO: ���̈ʒu�ɃR���g���[���̃C���X�^���X �f�[�^�̌㏈���p�̃R�[�h��ǉ����Ă�������
}

// CPUAxControlTest1Ctrl::OnDraw - �`��֐�

void CPUAxControlTest1Ctrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& /* rcInvalid */)
{
	if (!pdc)
		return;

	DoSuperclassPaint(pdc, rcBounds);

	RECT rc = rcBounds;
	pdc->DrawText(CString(L"Per User ActiveX Test"), &rc, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
}

// CPUAxControlTest1Ctrl::DoPropExchange - �i�����̃T�|�[�g

void CPUAxControlTest1Ctrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: �i�����������e�J�X�^�� �v���p�e�B�p�� PX_ �֐����Ăяo���܂��B
}


// CPUAxControlTest1Ctrl::OnResetState - �R���g���[��������̏�ԂɃ��Z�b�g���܂��B

void CPUAxControlTest1Ctrl::OnResetState()
{
	COleControl::OnResetState();  // DoPropExchange ���Ăяo���Ċ���l�Ƀ��Z�b�g

	// TODO: ���̈ʒu�ɃR���g���[���̏�Ԃ����Z�b�g���鏈����ǉ����Ă�������
}


// CPUAxControlTest1Ctrl::PreCreateWindow - CreateWindowEx �̃p�����[�^�[��ύX���܂��B

BOOL CPUAxControlTest1Ctrl::PreCreateWindow(CREATESTRUCT& cs)
{
	cs.lpszClass = _T("STATIC");
	BOOL bRet = COleControl::PreCreateWindow(cs);
	cs.hMenu = NULL;
	return bRet;
}

// CPUAxControlTest1Ctrl::IsSubclassedControl - ����̓T�u�N���X �R���g���[���ł��B

BOOL CPUAxControlTest1Ctrl::IsSubclassedControl()
{
	return TRUE;
}

// CPUAxControlTest1Ctrl::OnOcmCommand - �R�}���h ���b�Z�[�W���������܂��B

LRESULT CPUAxControlTest1Ctrl::OnOcmCommand(WPARAM wParam, LPARAM lParam)
{
	WORD wNotifyCode = HIWORD(wParam);

	// TODO: ���̈ʒu�ɃX�C�b�` �X�e�[�g�����g�� wNotifyCode ����������R�[�h��ǉ����Ă�������

	return 0;
}


// CPUAxControlTest1Ctrl ���b�Z�[�W �n���h���[
