// HomeDoc.cpp : implementation of the CHomeDoc class
//

#include "stdafx.h"
#include "Home.h"

#include "HomeDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CHomeDoc

IMPLEMENT_DYNCREATE(CHomeDoc, CDocument)

BEGIN_MESSAGE_MAP(CHomeDoc, CDocument)
	//{{AFX_MSG_MAP(CHomeDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CHomeDoc construction/destruction

CHomeDoc::CHomeDoc()
{
	// TODO: add one-time construction code here

}

CHomeDoc::~CHomeDoc()
{
}

BOOL CHomeDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CHomeDoc serialization

void CHomeDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CHomeDoc diagnostics

#ifdef _DEBUG
void CHomeDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CHomeDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CHomeDoc commands
