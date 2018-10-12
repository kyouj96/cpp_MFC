// HomeDoc.h : interface of the CHomeDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_HOMEDOC_H__14A5A527_00F8_4EC0_9BD5_FBDBAF644272__INCLUDED_)
#define AFX_HOMEDOC_H__14A5A527_00F8_4EC0_9BD5_FBDBAF644272__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CHomeDoc : public CDocument
{
protected: // create from serialization only
	CHomeDoc();
	DECLARE_DYNCREATE(CHomeDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHomeDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CHomeDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CHomeDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HOMEDOC_H__14A5A527_00F8_4EC0_9BD5_FBDBAF644272__INCLUDED_)
