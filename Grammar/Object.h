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
	void SetName(const char* pName) ;
	void SetMoney(int money) { money_ = money; }
	void AddMoney(int money) { money_ += money; }
	void SetExp(int exp) { exp_ = exp; }
	void AddExp(int exp) { exp_ += exp; }
	const char* GetName() const { return name_; }
	int GetAttack() const { return attack_; }
	int GetDefence() const { return defence_; }
	int GetHP() const { return hp_; }
	int GetMP() const { return mp_; }
	int GetSpeed() const { return speed_; }
	int Getmoney() const { return money_; }
	int GetLevel() const { return level_; }
	int Getexp() const { return exp_; }
	void Hit(int attack);
	virtual void Kill(const Object* pObj) {}
	virtual void Dead() {}

};