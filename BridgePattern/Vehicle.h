#pragma once

class Gear
{
public:
	virtual void Handle() = 0;
};

class Light
{
public:
	virtual void Shine()  = 0;
};

class ManualGear : public Gear
{
public:
	void Handle();
};

class AutoGear : public Gear
{
public:
	void Handle();
};

class LED : public Light
{
public:
	void Shine();
};

class Halogen : public Light
{
public:
	void Shine();
};


class IVehicleAction
{
public:
	virtual void Lighting() = 0;
	virtual void LaunchGear() = 0;
};


class Vehicle : public IVehicleAction
{
private:
	Gear * gear;
	Light * light;
public:
	Vehicle(Gear * _gear, Light * _light);
	virtual ~Vehicle();

public:
	virtual void Lighting();
	virtual void LaunchGear();
};

class Car : public Vehicle
{
public:
	Car(Gear * _gear, Light * _light);
	~Car();
};

class Truck : public Vehicle
{
public:
	Truck(Gear * _gear, Light * _light);
	~Truck();
};

