#pragma once
#include <iostream>
#include <list>
//#include "IObserve.h"

class IObserve;

class IObservable
{
public:
	virtual  void Add(IObserve * observe) = 0;
	virtual void Remove(IObserve * observe) = 0;
	virtual void Notice() = 0;

};


class ChatRoom : public IObservable
{
private:
	std::list<IObserve*> members;
	std::string status;
public:
	void Add(IObserve * observe);
	void Remove(IObserve * observe);
	void Notice();
	void SetStatus(std::string _status);
	std::string GetStatus();
public:
	
	
};