/**
 * Program to create Windows Application
 */
 
#include <windows.h>
 
int __stdcall WinMain(HINSTANCE hInstance,
                      HINSTANCE hPrevInstance,
                      LPSTR     lpszCmdLine,
                      int       nCmdShow)
{
  HWND h;

  /* Windows Api to create Window */
  h = CreateWindow("BUTTON", "Click Here", WS_OVERLAPPEDWINDOW,
                    50, 10, 500, 500, 0, 0, hInstance, 0);
  /* Displaying windows box */

  ShowWindow(h, nCmdShow);

  /* The dialog box is shown here to pause the windows bar
   * otherwise it will be closed soon as displayed
   */
  MessageBox(0, "Hi!", "Waiting", MB_OK);
  return 0;
}