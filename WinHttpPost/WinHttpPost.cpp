// WinHttpPost.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <Windows.h> 
#include "HttpConnect.h"

#include<iostream>    //cout system("pause");
#include <cstring>   //�����Զ���string s�������õ�strcpy�Ⱥ���


#include <string>   //���Զ���string s�������õ� 

#include <string.h>   //�����Զ���string s�������õ�strcpy�Ⱥ���

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
	string strFind="+";////Ҫ���ҵĴ����ɸ���Ҫ���滻
	string strT="%2b"; 
	size_t pos;
	pos = strUserPW.find(strFind);////����ָ���Ĵ�
	while (pos != -1)
	{
		strUserPW.replace(pos, strFind.length(), strT);////���µĴ��滻��ָ���Ĵ�

		pos = strUserPW.find(strFind);//////��������ָ���Ĵ���ֱ�����еĶ��ҵ�Ϊֹ
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

