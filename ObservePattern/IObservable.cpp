#include "IObservable.h"
#include "IObserve.h"

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

void ChatRoom::SetStatus(std::string _status)
{
	status = _status;
}

std::string ChatRoom::GetStatus()
{
	return status;
}
