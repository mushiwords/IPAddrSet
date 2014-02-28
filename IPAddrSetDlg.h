// IPAddrSetDlg.h : header file
//

#if !defined(AFX_IPADDRSETDLG_H__D5A0A00D_9F73_4E5A_B8E9_7E33912F9968__INCLUDED_)
#define AFX_IPADDRSETDLG_H__D5A0A00D_9F73_4E5A_B8E9_7E33912F9968__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CIPAddrSetDlg dialog

class CIPAddrSetDlg : public CDialog
{
// Construction
public:
	CIPAddrSetDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CIPAddrSetDlg)
	enum { IDD = IDD_IPADDRSET_DIALOG };
	CString	m_ipadd1;
	CString	m_ipadd2;
	CString	m_ipadd3;
	CString	m_ipadd4;
	CString	m_ipdns11;
	CString	m_ipdns12;
	CString	m_ipdns13;
	CString	m_ipdns14;
	CString	m_ipdns21;
	CString	m_ipdns22;
	CString	m_ipdns23;
	CString	m_ipdns24;
	CString	m_ipgate1;
	CString	m_ipgate2;
	CString	m_ipgate3;
	CString	m_ipgate4;
	CString	m_ipmask1;
	CString	m_ipmask2;
	CString	m_ipmask3;
	CString	m_ipmask4;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CIPAddrSetDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CIPAddrSetDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnChangevalue();
	afx_msg void OnAutovalue();
	afx_msg void OnAboutme();
	afx_msg void OnIpdns2addr();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IPADDRSETDLG_H__D5A0A00D_9F73_4E5A_B8E9_7E33912F9968__INCLUDED_)
