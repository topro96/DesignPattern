#pragma once

class IHeroAction
{
public:
	virtual void Jump() = 0;
	virtual void Fight() = 0;
	virtual void MoveForward() = 0;
	virtual void MoveBack() = 0;
	virtual void LieDown() = 0;

};

class Hero : public IHeroAction
{
public:
	Hero();
	~Hero();

public:
	void Jump();
	void Fight();
	void MoveForward();
	void MoveBack();
	void LieDown();

};

