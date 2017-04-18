/**
 * Program to create dialog box in C
 */

#include<windows.h>

/* Main function of windows application */

int __stdcall WinMain(HINSTANCE hInstance,
					  HINSTANCE hPrevInstance,
					  LPSTR lpCmdLine,
					  int nShowCmd)
{
	MessageBox(0, "Hello Windows!", "Sample Title", 0);
	return 0;
}
