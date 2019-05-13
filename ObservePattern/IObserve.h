#pragma once
#include "IObservable.h"

class IObservable;
class ChatRoom;

class IObserve
{
public:
	virtual void Update() = 0;

};

class Member : public IObserve
{
private:
	ChatRoom * chatRoom;
public:
	Member();
	Member(ChatRoom * _chatRoom);

	void SetChatRoom(ChatRoom * _chatRoom);
public:
	 void Update();

};

