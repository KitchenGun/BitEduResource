//newmemberdlg.cpp

#include "std.h"

BOOL CALLBACK NewMemberDlgProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg)
	{
		case WM_INITDIALOG: return new_InitDialog(hDlg);
		case WM_COMMAND:	
		{
			switch (LOWORD(wParam))
			{
			case IDCANCEL: EndDialog(hDlg, IDCANCEL); break;
			}
			return TRUE;
		}
	}
	return FALSE;
}

BOOL new_InitDialog(HWND hDlg)
{
	HWND hCombo = GetDlgItem(hDlg, IDC_COMBO1);

	TCHAR temp[10];
	for (int i = 1; i <= 100; i++)
	{
		wsprintf(temp, TEXT("%d"), i);
		SendMessage(hCombo, CB_ADDSTRING, 0, (LPARAM)temp);
	}

	SendMessage(hCombo, CB_SETCURSEL, 0, 0);

	return TRUE;
}