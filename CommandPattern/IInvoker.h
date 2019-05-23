#pragma once
#include "ICommand.h"

class PlayerInvoker
{
public:

	ICommand * jump;
	ICommand * move_forward;
	ICommand * move_back;
	ICommand * lie_down;
	ICommand * fight;

public:
	PlayerInvoker(ICommand * _jump, ICommand * _forward, ICommand * _back, ICommand * _lie, ICommand * _fight);
	~PlayerInvoker();
};


