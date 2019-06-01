#pragma once

class MotherBoard
{
public:
	void Connect();
};

class CPU
{
public:
	void Read();
	void Move();
	void Jump();
};

class Memory
{
public:
	void Store();
};

class HardDrive
{
public:
	void Store();
};

class PowerSupple
{
public:
	void Supple();

};

class ComputerFacade
{
private:
	MotherBoard * mother_board;
	CPU * cpu;
	Memory * memory;
	HardDrive * hard_drive;
	PowerSupple * power_supple;
public:
	ComputerFacade();

	~ ComputerFacade();
public:
	void Start();
};