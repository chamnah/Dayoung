#include <iostream>
#include "Player.h"
#include "Func.h"
#include "Monster.h"

using namespace std;
/*
1. ĳ���� �����
2. ����
3. ����
4. �κ��丮
5. ����Ʈ
*/

Player p1;

void CreatePlayer()
{
	char name[20];
	cout << "�̸��� �����ΰ���?" << endl;
	cin >> name;
	p1.SetName(name);

	int job;
	cout << "������ ������." << endl;
	cout << "1. ������ �˹ٻ� 2. ������ 3. û�Һ� 4. �ҹ�� 5. �ǻ�" << endl;
	cin >> job;
	p1.SetJob(static_cast<JobType>(job));
	p1.ShowStatus();
}

void CreateMonster()
{
}

void Battle(DungeonType type)
{
	Monster* pMonster = new Monster;
	pMonster->Initialize(type);

	while (pMonster->GetHP() > 0 && p1.GetHP() > 0)
	{
		cout << "=====" << GetDungeonName(type) << " ���� =====" << endl;
		cout << "=====" << pMonster->GetName() << "=====" << endl;
		cout << "���� :" << pMonster->GetLevel() << endl;
		cout << "HP :" << pMonster->GetHP() << endl;
		cout << "MP :" << pMonster->GetMP() << endl;
		cout << "���ݷ� :" << pMonster->GetAttack() << endl;
		cout << "���� :" << pMonster->GetDefence() << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "=====" << p1.GetName() << "=====" << endl;
		cout << "���� :" << p1.GetLevel() << endl;
		cout << "HP :" << p1.GetHP() << endl;
		cout << "MP :" << p1.GetMP() << endl;
		cout << "���ݷ� :" << p1.GetAttack() << endl;
		cout << "���� :" << p1.GetDefence() << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "0. ���� 1. ��� 2. ��ų 3. ������ 4. ��������" << endl;
		int select = 0;
		cin >> select;

		switch (select)
		{
		case ATTACK:
			Object* pFirst;
			Object* pSecond;

			if (p1.GetSpeed() >= pMonster->GetSpeed())
			{
				pFirst = &p1;
				pSecond = pMonster;
			}
			else
			{
				pSecond = &p1;
				pFirst = pMonster;
			}
			pSecond->Hit(pFirst->GetAttack());
			pFirst->Hit(pSecond->GetAttack());
			break;
		case DEFENCE:
			break;
		case SKILL:
			break;
		case ITEM:
			break;
		case ESCAPE:
			break;
		default:
			break;
		}
	}

	delete pMonster;
	pMonster = nullptr;
}

void ShowDungeon()
{
	int select = 0;
	cout << "0. ���� 1. ���� 2. ����� 3. �� 4. �Ǹ�";
	cin >> select;
	Battle(static_cast<DungeonType>(select));
}

void ShowStage()
{
	int selectedStage = 0;
	cout << "0. ���� 1. ����";
	cin >> selectedStage;
	switch (selectedStage)
	{
	case DUNGEON:
		ShowDungeon();
		break;

	default:
		break;
	}

}

int main()
{
	CreatePlayer();
	ShowStage();
}

/*
����
1. ���� ����
- ����ġ ȹ��
- �� ȹ��
- ���� ��(+ Ǯ��)

2. ��������

3. ����
- ü�� ȸ�� + ���� ����

4. ��� 
- ������ �÷��� ���� ���

5. ��ų
- ��ų ���
- mp ���̰� ��ų �������� ����!!
*/