// HomeView.cpp : implementation of the CHomeView class
//

#include "stdafx.h"
#include "Home.h"

#include "HomeDoc.h"
#include "HomeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CHomeView

IMPLEMENT_DYNCREATE(CHomeView, CView)

BEGIN_MESSAGE_MAP(CHomeView, CView)
	//{{AFX_MSG_MAP(CHomeView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CHomeView construction/destruction

CHomeView::CHomeView()
{
	// TODO: add construction code here

}

CHomeView::~CHomeView()
{
}

BOOL CHomeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CHomeView drawing

void CHomeView::OnDraw(CDC* pDC)
{
	CHomeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	CBrush brush, brush1, *pOldBrush, *pOldBrush1;
	CPen pen, *pOldPen;

	CClientDC dc(this);

	//펜설정
	pen.CreatePen(PS_SOLID,5,RGB(111,115,110));
	pOldPen = (CPen*)dc.SelectObject(&pen);

	//브러쉬설정
	brush.CreateSolidBrush(RGB(255,115,110));
	pOldBrush = (CBrush*)dc.SelectObject(&brush);

	//벽면과 둥근창
	dc.Rectangle(200,400,500,200);
	dc.Rectangle(50,200,200,400);
	dc.Ellipse(100,100,150,150);

	//브러쉬반환
	dc.SelectObject(pOldBrush);

	//브러쉬설정
	brush1.CreateSolidBrush(RGB(115,115,255));
	pOldBrush1 = (CBrush*)dc.SelectObject(&brush1);

	//지붕
	POINT pts[]={
		{125, 50},{425, 50},{500,200},{200,200},{125,50}
	};
	dc.Polygon(pts, 5);

	//브러쉬반환
	dc.SelectObject(pOldBrush1);

	//삼각지붕
	dc.MoveTo(200, 200);
	dc.LineTo(125, 50);
	dc.MoveTo(125, 50);
	dc.LineTo(50, 200);

	//문
	dc.MoveTo(75, 400);
	dc.LineTo(75, 250);
	dc.MoveTo(75, 250);
	dc.LineTo(175,250);
	dc.MoveTo(175,250);
	dc.LineTo(175,400);

	//창문
	dc.Rectangle(250,250,450,300);
	
	//창살
	dc.MoveTo(350, 250);
	dc.LineTo(350, 300);

	//굴뚝
	dc.MoveTo(350,150);
	dc.LineTo(350,100);
	dc.MoveTo(350,100);
	dc.LineTo(400,100);
	dc.MoveTo(400,100);
	dc.LineTo(400,150);

	dc.SelectObject(pOldPen);
	
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CHomeView printing

BOOL CHomeView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CHomeView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CHomeView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CHomeView diagnostics

#ifdef _DEBUG
void CHomeView::AssertValid() const
{
	CView::AssertValid();
}

void CHomeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CHomeDoc* CHomeView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHomeDoc)));
	return (CHomeDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CHomeView message handlers
