/***************************************************************************
* @ProjectName  TurnOffMonitor                                             *
* @Description  An easy way to turn off all monitors                       *
* @Author       David Gonzalez Garcia                                      *
* @Web          davidxl.es                                                 *
* @license      No license, Open source                                    *
* @date         2010-04-10                                                 *
* @version      1.1                                                        *
***************************************************************************/
#include <windows.h>

#define MONITOR_ON -1
#define MONITOR_OFF 2
#define MONITOR_STANBY 1

//int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrev, LPSTR lpCmd, int nCmdShow)
int main()
{
    SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, MONITOR_OFF);
    return 0;
}
