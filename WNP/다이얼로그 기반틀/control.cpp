//control.cpp

#include "std.h"

void con_NewMember(HWND hDlg)
{
	//���
	UINT ret = DialogBoxParam(GetModuleHandle(0),// hinstance
		MAKEINTRESOURCE(IDD_DIALOG2),
		hDlg, // �θ�
		NewMemberDlgProc, // �޼��� �Լ�.
		(LPARAM)0); // WM_INITDIALOG�� lParam�� ���޵ȴ�.
	if (ret == IDOK)
	{
	
	}
}

void con_Cancel(HWND hDlg)
{
	EndDialog(hDlg, IDCANCEL);
}