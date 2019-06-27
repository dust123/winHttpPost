// WinHttpPost.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h> 
#include "HttpConnect.h"
 

int main()
{
	
	//char chhttpPOST[1000];
	HttpConnect *http = new HttpConnect();
	//http->getData("192.168.0.11", "/ajaxlogout", "_t=1561370397125");

	http->getData("192.168.0.11", "/ajaxlogout", "_t=1561370397125");
	Sleep(1000);
	//sprintf_s(chhttpPOST, sizeof(chhttpPOST), "username=%s&password=%s&pwd=%s&secret=true","lulanglang", "12345678-l","12345678-l")
	//printf("\r\n");
	//printf(chhttpPOST);
	printf("\r\n");

	
	http->postData("192.168.0.11", "/webAuth/", "username=lulanglang&password=12345678-l&pwd=12345678-l&secret=true");
	  
	system("Pause");
    return 0;
}

