// WinHttpPost.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>

#include "HttpConnect.h"

int main()
{
	HttpConnect *http = new HttpConnect();
	//http->getData("192.168.0.11", "/login", "id=liukang&pw=123");
	http->postData("192.168.0.11", "/webAuth/", "username=lulanglang&password=12345678-l&pwd=12345678-l&secret=true");

	system("Pause");
	http->getData("192.168.0.11", "/ajaxlogout", "_t=1561370397125");
	system("Pause");
    return 0;
}

