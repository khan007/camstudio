#if !defined(AFX_TROUBLESHOOT_H__4E9048F9_4108_4B64_B5DF_04B0ECDAE07B__INCLUDED_)
#define AFX_TROUBLESHOOT_H__4E9048F9_4108_4B64_B5DF_04B0ECDAE07B__INCLUDED_

#pragma once

// CTroubleShootDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTroubleShootDlg dialog

class CTroubleShootDlg : public CDialog
{

public:
    CTroubleShootDlg(CWnd *pParent = NULL);

    // Dialog Data
    //{{AFX_DATA(CTroubleShootDlg)
    enum
    {
        IDD = IDD_TROUBLESHOOT
    };
    // NOTE: the ClassWizard will add data members here
    //}}AFX_DATA

    // Overrides
    // ClassWizard generated virtual function overrides
    //{{AFX_VIRTUAL(CTroubleShootDlg)
protected:
    virtual void DoDataExchange(CDataExchange *pDX); // DDX/DDV support
    //}}AFX_VIRTUAL

    // Implementation
protected:
    // Generated message map functions
    //{{AFX_MSG(CTroubleShootDlg)
    virtual void OnOK();
    virtual BOOL OnInitDialog();
    //}}AFX_MSG
    DECLARE_MESSAGE_MAP()
private:
    CButton m_ctrlButtonBehavior1;
    CButton m_ctrlButtonBehavior2;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TROUBLESHOOT_H__4E9048F9_4108_4B64_B5DF_04B0ECDAE07B__INCLUDED_)
