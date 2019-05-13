#include "IObserve.h"
#include <iostream>
#include <string>

Member::Member()
{
}

Member::Member(ChatRoom * _chatRoom) :
	chatRoom(_chatRoom)
{
}

void Member::SetChatRoom(ChatRoom * _chatRoom)
{
	chatRoom = _chatRoom;
}

void Member::Update()
{
	std::cout << chatRoom->GetStatus();
}
