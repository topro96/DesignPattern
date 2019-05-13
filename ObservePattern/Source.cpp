#include <iostream>
#include "IObservable.h"
#include "IObserve.h"

using namespace std;

int main()
{
	ChatRoom * chatRoom = new ChatRoom();
	
	Member* member1 = new Member(chatRoom);
	Member* member2 = new Member(chatRoom);
	Member* member3 = new Member(chatRoom);

	chatRoom->Add(member1);
	chatRoom->Add(member2);
	chatRoom->Add(member3);

	chatRoom->SetStatus("Hello World!");
	chatRoom->Notice();

	delete chatRoom;

	system("pause");
	return 0;
}

