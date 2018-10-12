// HomeView.h : interface of the CHomeView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_HOMEVIEW_H__908D855B_BDC4_40D0_9651_D8EFFF6B1703__INCLUDED_)
#define AFX_HOMEVIEW_H__908D855B_BDC4_40D0_9651_D8EFFF6B1703__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CHomeView : public CView
{
protected: // create from serialization only
	CHomeView();
	DECLARE_DYNCREATE(CHomeView)

// Attributes
public:
	CHomeDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHomeView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CHomeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CHomeView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in HomeView.cpp
inline CHomeDoc* CHomeView::GetDocument()
   { return (CHomeDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HOMEVIEW_H__908D855B_BDC4_40D0_9651_D8EFFF6B1703__INCLUDED_)
