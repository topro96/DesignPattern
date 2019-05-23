#include <iostream>
#include <conio.h>

#include "IInvoker.h"
#include "Hero.h"
#include "ICommand.h"

#define KEY_UP			72
#define KEY_DOWN		80
#define KEY_LEFT		75
#define KEY_RIGHT		77
#define KEY_SPACE		32
#define KEY_ESC			27

int main()
{
	IHeroAction * IAction = new Hero();

	PlayerInvoker* player = new PlayerInvoker(new JumpCommand(IAction), new MoveForwardCommand(IAction), 
		new MoveBackCommand(IAction), new LieDownCommand(IAction),new  FightCommand(IAction));

	int c = 0;
	std::cout << "\nGo go go:\n";
	while (1)
	{
		c = 0;
		switch ((c = _getch())) {
		case KEY_UP:
			player->jump->Excute();
			break;
		case KEY_DOWN:
			player->lie_down->Excute();
			break;
		case KEY_LEFT:
			player->move_back->Excute();
			break;
		case KEY_RIGHT:
			player->move_forward->Excute();
		break;
		case KEY_SPACE:
			player->fight->Excute();
			break;

		default:
		break;
		}

		if (KEY_ESC == c)
			break;
	}

	delete IAction;
	delete player;

	system("pause");
	return 0;
}