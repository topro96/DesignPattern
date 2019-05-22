#pragma once
class ICommand
{
public:
	virtual void Excute() = 0;
	virtual void Unexcute() = 0;
};


