
// test7-3(GDI)Dlg.h : ͷ�ļ�
//

#pragma once
#include "MemDC.h"

// Ctest73GDIDlg �Ի���
class Ctest73GDIDlg : public CDialogEx
{
// ����
public:
	
	Ctest73GDIDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_TEST73GDI_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnNcPaint();
	afx_msg LRESULT OnNcHitTest(CPoint point);
	afx_msg void OnBnClickedAdout();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};