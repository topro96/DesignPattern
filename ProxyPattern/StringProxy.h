#pragma once
#include <string>

class IParser
{
public:
	virtual int GetNumSpace() = 0;
};

class String : IParser
{
	std::string str;
public:
	String(std::string _str);
	~String();
public:
	int GetNumSpace();
};

class StringProxy : IParser
{
private:
	String * parser = NULL;
	std::string str;
public:
	StringProxy(std::string _str);
	~StringProxy();
public:
	int GetNumSpace(); // this is expensive func
};