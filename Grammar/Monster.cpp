#include "Monster.h"
#include <iostream>

void Monster::Initialize(DungeonType type)
{
	switch (type)
	{
	case EASY:
		strcpy_s(name_, "Ƽ ��");
		level_ = 1;
		attack_ = 1;
		defence_ = 1;
		hp_ = 10;
		mp_ = 10;
		money_ = 10;
		exp_ = 10;
		break;
	case NORMAL:
		strcpy_s(name_, "�� ��");
		level_ = 5;
		attack_ = 5;
		defence_ = 5;
		hp_ = 50;
		mp_ = 50;
		money_ = 50;
		exp_ = 50;
		break;
	case HARD:
		strcpy_s(name_, "�� ��");
		level_ = 10;
		attack_ = 10;
		defence_ = 10;
		hp_ = 100;
		mp_ = 100;
		money_ = 100;
		exp_ = 100;
		break;
	case HELL:
		strcpy_s(name_, "�� Ʈ");
		level_ = 15;
		attack_ = 15;
		defence_ = 15;
		hp_ = 150;
		mp_ = 150;
		money_ = 150;
		exp_ = 150;
		break;
	case NIGHTMARE:
		strcpy_s(name_, "ũ����");
		level_ = 20;
		attack_ = 20;
		defence_ = 20;
		hp_ = 200;
		mp_ = 200;
		money_ = 200;
		exp_ = 200;
		break;
	case END:
		break;
	default:
		break;
	}

}

void Monster::Kill(const Object* pObj)
{
	std::cout << name_ << "���� ������ �����Ͽ����ϴ�." << std::endl;
}

void Monster::Dead()
{
	std::cout << name_ << "(��)�� óġ�Ͽ����ϴ�." << std::endl;
	delete this;
}
