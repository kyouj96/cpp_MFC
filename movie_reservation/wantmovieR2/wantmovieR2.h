
// wantmovieR2.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CwantmovieR2App:
// �� Ŭ������ ������ ���ؼ��� wantmovieR2.cpp�� �����Ͻʽÿ�.
//

class CwantmovieR2App : public CWinApp
{
public:
	CwantmovieR2App();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CwantmovieR2App theApp;