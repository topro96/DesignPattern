#pragma once
class IObserve
{
public:
	virtual void Update() = 0;

};

class Member : public IObservable
{
public:
	 void Update();
};

