#pragma once
#include "Hero.h"

class ICommand
{
public:
	virtual void Excute() = 0;
	virtual void Unexcute() = 0;
};

class JumpCommand : public ICommand
{
private:
	IHeroAction * action;
public:
	void Excute();
	void Unexcute();
public:
	JumpCommand(IHeroAction * _action);
};

class MoveForwardCommand : public ICommand
{
private:
	IHeroAction * action;
public:
	void Excute();
	void Unexcute();
public:
	MoveForwardCommand(IHeroAction * _action);
};

class MoveBackCommand : public ICommand
{
private:
	IHeroAction * action;
public:
	void Excute();
	void Unexcute();
public:
	MoveBackCommand(IHeroAction * _action);
};

class LieDownCommand : public ICommand
{
private:
	IHeroAction * action;
public:
	void Excute();
	void Unexcute();
public:
	LieDownCommand(IHeroAction * _action);
};

class FightCommand : public ICommand
{
private:
	IHeroAction * action;
public:
	void Excute();
	void Unexcute();
public:
	FightCommand(IHeroAction * _action);
};
