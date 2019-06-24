#pragma once

#include <string>

class HttpConnect
{
public:
	HttpConnect();
	~HttpConnect();
public:
	void HttpConnect::socketHttp(std::string host, std::string request);
	void HttpConnect::postData(std::string host, std::string path, std::string post_content);
	void HttpConnect::getData(std::string host, std::string path, std::string get_content);
};

