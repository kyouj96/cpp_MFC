// Home.h : main header file for the HOME application
//

#if !defined(AFX_HOME_H__2A737E83_4E9A_4835_8338_E68DF5A97B12__INCLUDED_)
#define AFX_HOME_H__2A737E83_4E9A_4835_8338_E68DF5A97B12__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CHomeApp:
// See Home.cpp for the implementation of this class
//

class CHomeApp : public CWinApp
{
public:
	CHomeApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHomeApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CHomeApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HOME_H__2A737E83_4E9A_4835_8338_E68DF5A97B12__INCLUDED_)
