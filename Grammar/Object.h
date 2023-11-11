#pragma once
class Object
{
protected:
	char name_[20];
	int level_;
	int attack_;
	int defence_;
	int speed_;
	int hp_;
	int mp_;
	int exp_;
	int money_;

public:
	void SetName(const char* pName);
	const char* GetName() { return name_; }
	const int GetAttack() { return attack_; }
	const int GetDefence() { return defence_; }
	const int GetHP() { return hp_; }
	const int GetMP() { return mp_; }
	const int GetSpeed() { return speed_; }
	const int Getmoney() { return money_; }
	const int GetLevel() { return level_; }
	const int Getexp() { return exp_; }
	void Hit(int attack);
};