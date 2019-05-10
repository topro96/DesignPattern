#include "IObservable.h"


void ChatRoom::Add(IObserve * observe)
{
	members.push_back(observe);
}

void ChatRoom::Remove(IObserve * observe)
{
	members.remove(observe);
}

void ChatRoom::Notice()
{
	for each (IObserve * member in members)
	{
		member->Update();
	}
}
