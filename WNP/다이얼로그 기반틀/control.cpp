//control.cpp

#include "std.h"

void con_NewMember(HWND hDlg)
{
	//모달
	UINT ret = DialogBoxParam(GetModuleHandle(0),// hinstance
		MAKEINTRESOURCE(IDD_DIALOG2),
		hDlg, // 부모
		NewMemberDlgProc, // 메세지 함수.
		(LPARAM)0); // WM_INITDIALOG의 lParam로 전달된다.
	if (ret == IDOK)
	{
	
	}
}

void con_Cancel(HWND hDlg)
{
	EndDialog(hDlg, IDCANCEL);
}