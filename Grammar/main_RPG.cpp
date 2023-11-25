#include <iostream>
#include "Player.h"
#include "Func.h"
#include "Monster.h"
#include "Skill.h"
#include "SkillMgr.h"
#include <assert.h>
#include "Shop.h"
#include  "itemMgr.h"

using namespace std;
/*
1. ĳ���� �����
2. ����
3. ����
4. �κ��丮
5. ����Ʈ
*/

Player p1;

void TestFunc()
{

}

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

	SkillMgr* pMgr = SkillMgr::GetInst();

	p1.SetSkill(pMgr->GetSkill("�̶�Ŭ ����!"));
	p1.SetSkill(pMgr->GetSkill(0));
	p1.SetSkill(pMgr->GetSkill(1));
	p1.SetSkill(pMgr->GetSkill(1));

	/*AttackSkill temp;
	temp.SetFunc(&SkillMgr::TestFunc);*/

	//���� ��ų ����
}

void CreateMonster()
{
}

void Attack(Object* pFirst, Object* pSecond)
{
	pSecond->Hit(pFirst->GetAttack());

	if (pSecond->GetHP() <= 0)
	{
		pFirst->Kill(pSecond);
	}

	pFirst->Hit(pSecond->GetAttack());

	if (pFirst->GetHP() <= 0)
	{
		pFirst->Dead();
	}
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

		bool firstAttack = p1.GetSpeed() >= pMonster->GetSpeed();

		switch (select)
		{
		case ATTACK:
			if (firstAttack)
			{
				Attack(&p1, pMonster);
			}
			else
			{
				Attack(pMonster, &p1);
			}
			break;
		case DEFENCE:
			break;
		case SKILL:
		{
			int selectSkill = 0;
			p1.ShowSkillList();
			cin >> selectSkill;
			p1.UseSkill(selectSkill, pMonster);
			break;
		}
		/*case ITEM:
			break;
		case ESCAPE:
			break;*/
		default:
			break;
		}
	}
}

void ShowDungeon()
{
	int select = 0;
	cout << "0. ���� 1. ���� 2. ����� 3. �� 4. �Ǹ�";
	cin >> select;
	Battle(static_cast<DungeonType>(select));
}

void ShowShop()
{
	while (true)
	{
		int select = 0;
		cout << "0. ���� ���� 1. �� ���� 2. ���� ���� 3. ���ư���" << endl;
		cin >> select;
		system("cls");

		if (select == 3)
		{
			break;
		}

		Shop npcShop;
		npcShop.Init(static_cast<ShopType>(select));
		npcShop.Show();

		// �Լ� �ۿ��� �����ϰ� ���� ��
	}
}

void ShowStage()
{
	int selectedStage = 0;

	while (true)
	{
		cout << "0. ���� 1. ���� 2. ���� 3. ĳ���� ����";
		cin >> selectedStage;
		system("cls");
		switch (selectedStage)
		{
		case DUNGEON:
			ShowDungeon();
			break;
		case SHOP:
			ShowShop();
			break;
		case INFO:
			p1.ShowInfo();
			system("pause");
			break;

		default:
			break;
		}
	}
}

int main()
{
	SkillMgr::GetInst()->Initialize();
	ItemMgr::GetInst()->Init();
	CreatePlayer();
	ShowStage();
}

/*
��� ����/����

*/


/*
���׸��� - ���л� 4��

JRPG - ����

����


���� ��� - �� 10���� ����� / exp 0

*/

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

/* 11/11 ����
��ų �����ϱ�

������ �� �������ϴ�.
�����

������ ����
�̱���
���丮
������
GOF

���� - ����
â�� - ���� + ��ȹ
����ȹ
*/

/*
- ����
- ���ǵ带 ����� ��ų ��� ����

- ������ ������ �غ���
- �κ��丮 ���� -> ������ ����Ʈ 
- ���� �����ϱ�(����)
- ������ �߰� - ���� ����â / ����


+ ���� ����� - ĳ���� ���� ���� �� �ε�
*/