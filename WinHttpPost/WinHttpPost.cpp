// WinHttpPost.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h> 
#include "HttpConnect.h"

#include<iostream>    //cout system("pause");
#include <cstring>   //不可以定义string s；可以用到strcpy等函数


#include <string>   //可以定义string s；可以用到 

#include <string.h>   //不可以定义string s；可以用到strcpy等函数

using   namespace   std;
int main()
{
	
	//char chhttpPOST[1000];
	HttpConnect *http = new HttpConnect();
	//http->getData("192.168.0.11", "/ajaxlogout", "_t=1561370397125");


	//sprintf_s(chhttpPOST, sizeof(chhttpPOST), "username=%s&password=%s&pwd=%s&secret=true","lulanglang", "12345678-l","12345678-l")
	//printf("\r\n");
	//printf(chhttpPOST);
	printf("\r\n");
	string strUserPW = "username=lulanglang&password=11111111+a&pwd=11111111+a&secret=true";
	string strFind="+";////要查找的串，可根据要求替换
	string strT="%2b"; 
	size_t pos;
	pos = strUserPW.find(strFind);////查找指定的串
	while (pos != -1)
	{
		strUserPW.replace(pos, strFind.length(), strT);////用新的串替换掉指定的串

		pos = strUserPW.find(strFind);//////继续查找指定的串，直到所有的都找到为止
	}
	cout << strUserPW << endl;

	while (1) 
	{
		http->getData("192.168.0.11", "/ajaxlogout", "_t=1561370397125");
		Sleep(500);
		//http->postData("192.168.0.11", "/webAuth/", "username=lulanglang&password=11111111%2ba&pwd=11111111%2ba&secret=true");
		http->postData("192.168.0.11", "/webAuth/", strUserPW);
		Sleep(1000);
		system("Pause");
	}



	system("Pause");
    return 0;
}

