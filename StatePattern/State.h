#pragma once
#include <iostream>
#include "Gear.h"
#include "../SingletonPattern/Singleton.h"

namespace StatePattern
{
	class GearState : public IGearAction
	{
	public:
		virtual void Up() = 0;
		virtual  void Down() = 0;
		virtual void Print() = 0;

	};


	class NoneState : public GearState 
	{
	private:
		Gear * gear;
	public:
		NoneState(Gear * _gear);
	public:
		void Up();
		void Down();
		void Print();
	};

	class FirstState : public GearState
	{
	private:
		Gear * gear;
	public:
		FirstState(Gear * _gear);
	public:
		void Up();
		void Down();
		void Print();
	};

	class SecondState : public GearState
	{
	private:
		Gear * gear;
	public:
		SecondState(Gear * _gear);
	public:
		void Up();
		void Down();
		void Print();
	};

	class ThirdState : public GearState
	{
	private:
		Gear * gear;
	public:
		ThirdState(Gear * _gear);
	public:
		void Up();
		void Down();
		void Print();
	};

	class FourthState : public GearState
	{
	private:
		Gear * gear;
	public:
		FourthState(Gear * _gear);
	public:
		void Up();
		void Down();
		void Print();
	};
}
