#pragma once
#include <iostream>
#include <list>
#include "IObserve.h"


class IObservable
{
public:
	virtual  void Add(IObserve * observe) = 0;
	virtual void Remove(IObserve * observe) = 0;
	virtual void Notice() = 0;

};


class ChatRoom : public IObservable
{
public:
	std::list<IObserve*> members = std::list<IObserve*>();
public:
	void Add(IObserve * observe);
	void Remove(IObserve * observe);
	void Notice();
public:
	
};