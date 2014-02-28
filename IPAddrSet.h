// IPAddrSet.h : main header file for the IPADDRSET application
//

#if !defined(AFX_IPADDRSET_H__912067E8_6572_45E8_AD34_FFEE62C3303E__INCLUDED_)
#define AFX_IPADDRSET_H__912067E8_6572_45E8_AD34_FFEE62C3303E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CIPAddrSetApp:
// See IPAddrSet.cpp for the implementation of this class
//

class CIPAddrSetApp : public CWinApp
{
public:
	CIPAddrSetApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CIPAddrSetApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CIPAddrSetApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IPADDRSET_H__912067E8_6572_45E8_AD34_FFEE62C3303E__INCLUDED_)
