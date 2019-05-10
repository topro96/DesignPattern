#include <iostream>

using namespace std;

class IObsderve
{
	virtual void Update() = 0;
};

class IObserdvable
{
public:
	virtual void Add() = 0;
	virtual void Remove() = 0;

	virtual void Notice() = 0;

};

class IMedssage
{

};

int main()
{

}

