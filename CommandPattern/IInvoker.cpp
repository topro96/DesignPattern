#include "IInvoker.h"


PlayerInvoker::PlayerInvoker(ICommand * _jump, ICommand * _forward, ICommand * _back, ICommand * _lie, ICommand * _fight) :
	jump(_jump),
	move_forward(_forward),
	move_back(_back),
	lie_down(_lie),
	fight(_fight)
{

}

PlayerInvoker::~PlayerInvoker()
{
	delete jump;
	delete move_forward;
	delete move_back;
	delete lie_down;
}
