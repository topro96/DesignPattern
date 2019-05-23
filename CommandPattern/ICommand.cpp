#include "ICommand.h"

void JumpCommand::Excute()
{
	action->Jump();
}

void JumpCommand::Unexcute()
{
	action->LieDown();
}

JumpCommand::JumpCommand(IHeroAction * _action) :
	action(_action)
{
}

void MoveForwardCommand::Excute()
{
	action->MoveForward();
}

void MoveForwardCommand::Unexcute()
{
	action->DoNothing();
}

MoveForwardCommand::MoveForwardCommand(IHeroAction * _action) :
	action(_action)
{
}

void MoveBackCommand::Excute()
{
	action->MoveBack();
}

void MoveBackCommand::Unexcute()
{
	action->DoNothing();
}

MoveBackCommand::MoveBackCommand(IHeroAction * _action) :
action(_action)
{
}

void LieDownCommand::Excute()
{
	action->LieDown();
}

void LieDownCommand::Unexcute()
{
	action->DoNothing();
}

LieDownCommand::LieDownCommand(IHeroAction * _action) :
	action(_action)
{
}

void FightCommand::Excute()
{
	action->Fight();
}

void FightCommand::Unexcute()
{
	action->DoNothing();
}

FightCommand::FightCommand(IHeroAction * _action) :
	action(_action)
{
}
