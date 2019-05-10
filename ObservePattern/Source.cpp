#include <iostream>

using namespace std;

class IObserve
{
	virtual void Update() = 0;
};

class IObservable
{
public:
	virtual void Add() = 0;
	virtual void Remove() = 0;

	virtual void Notice() = 0;

};

class IMessage
{

};

int main()
{

}

