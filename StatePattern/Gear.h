#pragma once
#include <iostream>



namespace StatePattern
{
	class GearState;
	class IGearAction
	{
	public:
		virtual void Up() = 0;
		virtual void Down() = 0;
	};

	class Gear : public IGearAction
	{
	private:
		GearState * current_state;
	public:
		~Gear();

	public:
		void Up();
		void Down();
		void SwitchState(GearState * state);
		void Launch();
	};

}
