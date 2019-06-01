#include "Computer.h"
#include <iostream>
#include <string>

void MotherBoard::Connect()
{
	std::cout << "\nMotherBoard connect to every part of computer!";
}

void CPU::Read()
{
	std::cout << "\nCPU read data from hard drive";
}

void CPU::Move()
{
	std::cout << "CPU move";
}

void CPU::Jump()
{
	std::cout << "\nCPU jump";
}

void Memory::Store()
{
	std::cout << "\nMemory stored data";
}

void HardDrive::Store()
{
	std::cout << "\nHardDrive store data";
}

void PowerSupple::Supple()
{
	std::cout << "\nSuppled power";
}

ComputerFacade::ComputerFacade() :
	mother_board(new MotherBoard),
	cpu(new CPU()),
	memory(new Memory),
	hard_drive(new HardDrive),
	power_supple(new PowerSupple)
{
}

ComputerFacade::~ComputerFacade()
{
	delete mother_board;
	delete cpu;
	delete memory;
	delete hard_drive;
	delete power_supple;
}

void ComputerFacade::Start()
{
	power_supple->Supple();
	mother_board->Connect();
	cpu->Read();
	memory->Store();
	hard_drive->Store();
}
