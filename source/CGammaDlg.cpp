// CGammaDlg.cpp: 구현 파일
//

#include "pch.h"
#include "ImageProcessing.h"
#include "CGammaDlg.h"
#include "afxdialogex.h"


// CGammaDlg 대화 상자

IMPLEMENT_DYNAMIC(CGammaDlg, CDialog)

CGammaDlg::CGammaDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG6, pParent)
	, m_GammaTrans(0)
{

}

CGammaDlg::~CGammaDlg()
{
}

void CGammaDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_GammaTrans);
	DDV_MinMaxFloat(pDX, m_GammaTrans, 0, 2);
}


BEGIN_MESSAGE_MAP(CGammaDlg, CDialog)
END_MESSAGE_MAP()


// CGammaDlg 메시지 처리기
