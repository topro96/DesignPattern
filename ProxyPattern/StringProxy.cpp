#include "StringProxy.h"

String::String(std::string _str) :
	str(_str)
{
}

String::~String()
{
}

int String::GetNumSpace()
{
	int num = 0;
	for each (char element in str)
	{
		if (element == ' ')
			num++;
	};
	return num;
}


StringProxy::StringProxy(std::string _str) :
	str(_str)
{
}

StringProxy::~StringProxy()
{
	if(NULL != parser)
	delete parser;
}

int StringProxy::GetNumSpace()
{
	if (NULL == parser)
		parser = new String(str);

	return parser->GetNumSpace();
}
