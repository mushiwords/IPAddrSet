// IPAddrSetDlg.cpp : implementation file
//

#include "stdafx.h"
#include "IPAddrSet.h"
#include "IPAddrSetDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CIPAddrSetDlg dialog

CIPAddrSetDlg::CIPAddrSetDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CIPAddrSetDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CIPAddrSetDlg)
	m_ipadd1 = _T("");
	m_ipadd2 = _T("");
	m_ipadd3 = _T("");
	m_ipadd4 = _T("");
	m_ipdns11 = _T("");
	m_ipdns12 = _T("");
	m_ipdns13 = _T("");
	m_ipdns14 = _T("");
	m_ipdns21 = _T("");
	m_ipdns22 = _T("");
	m_ipdns23 = _T("");
	m_ipdns24 = _T("");
	m_ipgate1 = _T("");
	m_ipgate2 = _T("");
	m_ipgate3 = _T("");
	m_ipgate4 = _T("");
	m_ipmask1 = _T("");
	m_ipmask2 = _T("");
	m_ipmask3 = _T("");
	m_ipmask4 = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	//m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_hIcon = AfxGetApp()->LoadIcon(IDI_ICON1);

}

void CIPAddrSetDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CIPAddrSetDlg)
	DDX_Text(pDX, IDC_IPADDRESS1, m_ipadd1);
	DDX_Text(pDX, IDC_IPADDRESS2, m_ipadd2);
	DDX_Text(pDX, IDC_IPADDRESS3, m_ipadd3);
	DDX_Text(pDX, IDC_IPADDRESS4, m_ipadd4);
	DDX_Text(pDX, IDC_IPDNS11, m_ipdns11);
	DDX_Text(pDX, IDC_IPDNS12, m_ipdns12);
	DDX_Text(pDX, IDC_IPDNS13, m_ipdns13);
	DDX_Text(pDX, IDC_IPDNS14, m_ipdns14);
	DDX_Text(pDX, IDC_IPDNS21, m_ipdns21);
	DDX_Text(pDX, IDC_IPDNS22, m_ipdns22);
	DDX_Text(pDX, IDC_IPDNS23, m_ipdns23);
	DDX_Text(pDX, IDC_IPDNS24, m_ipdns24);
	DDX_Text(pDX, IDC_IPGATEWAY1, m_ipgate1);
	DDX_Text(pDX, IDC_IPGATEWAY2, m_ipgate2);
	DDX_Text(pDX, IDC_IPGATEWAY3, m_ipgate3);
	DDX_Text(pDX, IDC_IPGATEWAY4, m_ipgate4);
	DDX_Text(pDX, IDC_IPMASK1, m_ipmask1);
	DDX_Text(pDX, IDC_IPMASK2, m_ipmask2);
	DDX_Text(pDX, IDC_IPMASK3, m_ipmask3);
	DDX_Text(pDX, IDC_IPMASK4, m_ipmask4);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CIPAddrSetDlg, CDialog)
	//{{AFX_MSG_MAP(CIPAddrSetDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_CHANGEVALUE, OnChangevalue)
	ON_BN_CLICKED(IDC_AUTOVALUE, OnAutovalue)
	ON_BN_CLICKED(IDC_ABOUTME, OnAboutme)
	ON_BN_CLICKED(IDC_IPDNS2ADDR, OnIpdns2addr)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CIPAddrSetDlg message handlers

BOOL CIPAddrSetDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	CString   str1   =   "192"; 
	CString   str2   =   "168"; 
	CString   str3   =   "66"; 
	CString   str4   =   "100"; 
	GetDlgItem(IDC_IPADDRESS1)->SetWindowText(str1);
	GetDlgItem(IDC_IPADDRESS2)->SetWindowText(str2);
	GetDlgItem(IDC_IPADDRESS3)->SetWindowText(str3);
	GetDlgItem(IDC_IPADDRESS4)->SetWindowText(str4);
	CString   strmask1   =   "255"; 
	CString   strmask2   =   "255";
	CString   strmask3   =   "255";
	CString   strmask4   =   "0";
	GetDlgItem(IDC_IPMASK1)->SetWindowText(strmask1);
	GetDlgItem(IDC_IPMASK2)->SetWindowText(strmask2);
	GetDlgItem(IDC_IPMASK3)->SetWindowText(strmask3);
	GetDlgItem(IDC_IPMASK4)->SetWindowText(strmask4);
	CString   gateway1   =   "192"; 
	CString   gateway2   =   "168";
	CString   gateway3   =   "66";
	CString   gateway4   =   "1";
	GetDlgItem(IDC_IPGATEWAY1)->SetWindowText(gateway1);
	GetDlgItem(IDC_IPGATEWAY2)->SetWindowText(gateway2);
	GetDlgItem(IDC_IPGATEWAY3)->SetWindowText(gateway3);
	GetDlgItem(IDC_IPGATEWAY4)->SetWindowText(gateway4);
	CString   IPDNS11   =   "202"; 
	CString   IPDNS12   =   "200";
	CString   IPDNS13   =   "144";
	CString   IPDNS14   =   "3";
	GetDlgItem(IDC_IPDNS11 )->SetWindowText(IPDNS11);
	GetDlgItem(IDC_IPDNS12 )->SetWindowText(IPDNS12);
	GetDlgItem(IDC_IPDNS13 )->SetWindowText(IPDNS13);
	GetDlgItem(IDC_IPDNS14)->SetWindowText(IPDNS14);
	CString   IPDNS21   =   "61"; 
	CString   IPDNS22   =   "134";
	CString   IPDNS23   =   "1";
	CString   IPDNS24   =   "4";
	GetDlgItem(IDC_IPDNS21 )->SetWindowText(IPDNS21);
	GetDlgItem(IDC_IPDNS22 )->SetWindowText(IPDNS22);
	GetDlgItem(IDC_IPDNS23 )->SetWindowText(IPDNS23);
	GetDlgItem(IDC_IPDNS24)->SetWindowText(IPDNS24);
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CIPAddrSetDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CIPAddrSetDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CIPAddrSetDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CIPAddrSetDlg::OnChangevalue() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	CString ipaddr = m_ipadd1 +"."+ m_ipadd2 +"."+ m_ipadd3 + "."+m_ipadd4 +" ";
	CString ipmask = m_ipmask1 + "." + m_ipmask2 + "." + m_ipmask3 + "." +m_ipmask4 + " ";
	CString ipdns1 = m_ipdns11 + "." + m_ipdns12 + "." + m_ipdns13 + "." +m_ipdns14 + " ";
	CString ipdns2 = m_ipdns21 + "." + m_ipdns22 + "." + m_ipdns23 + "." +m_ipdns24 + " ";
	CString ipgate = m_ipgate1 + "." + m_ipgate2 + "." + m_ipgate3 + "." + m_ipgate4 + " ";
	CString ipsetstr ="netsh interface ip set address name=本地连接 source=static addr="+ ipaddr +"mask=" + ipmask + "gateway=" + ipgate;

	CString ipdnsstr ="netsh interface ip set dns name=本地连接 source=static addr=" + ipdns1 +"register=primary";

	//AfxMessageBox(ipdnsstr);

	//system(ipsetstr);
	//system(ipdnsstr);
	int ipadd1 =atoi(m_ipadd1);
	int ipadd2 =atoi(m_ipadd2);
	int ipadd3 =atoi(m_ipadd3);
	int ipadd4 =atoi(m_ipadd4);
	int ipmask1 =atoi(m_ipmask1);
	int ipmask2 =atoi(m_ipmask2);
	int ipmask3 =atoi(m_ipmask3);
	int ipmask4 =atoi(m_ipmask4);
	int ipgate1 =atoi(m_ipgate1);
	int ipgate2 =atoi(m_ipgate2);
	int ipgate3 =atoi(m_ipgate3);
	int ipgate4 =atoi(m_ipgate4);
	int ipdns11 =atoi(m_ipdns11);
	int ipdns12 =atoi(m_ipdns12);
	int ipdns13 =atoi(m_ipdns13);
	int ipdns14 =atoi(m_ipdns14);
	int ipdns21 =atoi(m_ipdns21);
	int ipdns22 =atoi(m_ipdns22);
	int ipdns23 =atoi(m_ipdns23);
	int ipdns24 =atoi(m_ipdns24);

	
	if((m_ipadd1=="")||(m_ipadd2=="")||(m_ipadd3=="")||(m_ipadd4==""))
	{
		AfxMessageBox("ip address is NULL !");
		return ;
	}
	if((m_ipmask1=="")||(m_ipmask2=="")||(m_ipmask3=="")||(m_ipmask4==""))
	{
		AfxMessageBox("ip mask address is NULL !");
		return ;
	}
	if((m_ipgate1=="")||(m_ipgate2=="")||(m_ipgate3=="")||(m_ipgate4==""))
	{
		AfxMessageBox("ip gateway address is NULL !");
		return ;
	}
	if((m_ipdns11=="")||(m_ipdns12=="")||(m_ipdns13=="")||(m_ipdns14==""))
	{
		AfxMessageBox("ip dns1 address is NULL !");
		return ;
	}
	if((ipadd1>255)||(ipadd2>255)||(ipadd3>255)||(ipadd4>255))
	{
		AfxMessageBox("ip address is out of range !");
		return ;
	}
	if((ipgate1>255)||(ipgate2>255)||(ipgate3>255)||(ipgate4>255))
	{
		AfxMessageBox("ip gateway address is out of range !");
		return ;
	}
	if((ipmask1>255)||(ipmask2>255)||(ipmask3>255)||(ipmask4>255))
	{
		AfxMessageBox("ip mask address is out of range !");
		return ;
	}
	if((ipdns11>255)||(ipdns12>255)||(ipdns13>255)||(ipdns14>255))
	{
		AfxMessageBox("ip dns1 address is out of range !");
		return ;
	}

	WinExec(ipsetstr,SW_HIDE);
	WinExec(ipdnsstr,SW_HIDE);
	AfxMessageBox("ip地址修改完成");
	
}

void CIPAddrSetDlg::OnAutovalue() 
{
	// TODO: Add your control notification handler code here
	CString ipclear = "netsh interface ip set address name=本地连接 source=dhcp";
	CString ipdnsclear = "netsh interface ip set dns name=本地连接 source=dhcp";
	
	//system(ipclear);
	//system(ipdnsclear);
	WinExec(ipclear,SW_HIDE);
	WinExec(ipdnsclear,SW_HIDE);
	AfxMessageBox("IP设置为自动获取");
	
}

void CIPAddrSetDlg::OnAboutme() 
{
	// TODO: Add your control notification handler code here
	CAboutDlg abdlg;
	abdlg.DoModal();
}

void CIPAddrSetDlg::OnIpdns2addr() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	CString ipdns2 = m_ipdns21 + "." + m_ipdns22 + "." + m_ipdns23 + "." +m_ipdns24 + " ";
	int ipdns21 =atoi(m_ipdns21);
	int ipdns22 =atoi(m_ipdns22);
	int ipdns23 =atoi(m_ipdns23);
	int ipdns24 =atoi(m_ipdns24);
	if((ipdns21>255)||(ipdns22>255)||(ipdns23>255)||(ipdns24>255))
	{
		AfxMessageBox("ip dns2 address is out of range !");
		return ;
	}

	CString ipadddnsstr = "netsh interface ip add dns 本地连接 " +ipdns2 ;
	WinExec(ipadddnsstr,SW_HIDE);
	AfxMessageBox("备用 DNS 添加成功！");
}
