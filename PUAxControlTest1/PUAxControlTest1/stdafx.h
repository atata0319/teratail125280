#pragma once

// stdafx.h : �W���̃V�X�e�� �C���N���[�h �t�@�C���̃C���N���[�h �t�@�C���A�܂���
// �Q�Ɖ񐔂������A�����܂�ύX����Ȃ��A�v���W�F�N�g��p�̃C���N���[�h �t�@�C��
// ���L�q���܂��B

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // Windows �w�b�_�[����g�p����Ă��Ȃ����������O���܂��B
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // �ꕔ�� CString �R���X�g���N�^�[�͖����I�ł��B
#define _ATL_NO_AUTOMATIC_NAMESPACE             // �N���X���̋�����������܂��B

#include <afxctl.h>         // MFC �� ActiveX  �R���g���[��
#include <afxext.h>         // MFC �̊g������
#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC �� Internet Explorer 4 �R���� �R���g���[�� �T�|�[�g
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>                     // MFC �� Windows �R���� �R���g���[�� �T�|�[�g
#endif // _AFX_NO_AFXCMN_SUPPORT

// MFC �̃f�[�^�x�[�X �N���X���g�p���Ȃ��ꍇ�́A�ȉ��� 2 �s�̃C���N���[�h
//  �t�@�C���̋L�q���폜���Ă��������B
#ifndef _WIN64

#ifndef _AFX_NO_DB_SUPPORT
#include <afxdb.h>                      // MFC ODBC �f�[�^�x�[�X �N���X
#endif // _AFX_NO_DB_SUPPORT

#ifndef _AFX_NO_DAO_SUPPORT
#include <afxdao.h>                     // MFC DAO �f�[�^�x�[�X �N���X
#endif // _AFX_NO_DAO_SUPPORT

#endif // _WIN64

