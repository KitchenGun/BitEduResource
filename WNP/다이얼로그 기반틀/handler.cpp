//handler.cpp

#include "std.h"

BOOL OnInitDialog(HWND hDlg, WPARAM wParam, LPARAM lParam)
{
	return TRUE;
}

BOOL OnCommand(HWND hDlg, WPARAM wParam, LPARAM lParam)
{
	switch (LOWORD(wParam))
	{
	case IDC_BUTTON4:	con_NewMember(hDlg);	break;
	case IDCANCEL:		con_Cancel(hDlg);		break;
	}
	return TRUE;
}
