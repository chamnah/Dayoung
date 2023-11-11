#include <iostream>
#include "Player.h"
#include "Func.h"
#include "Monster.h"

using namespace std;
/*
1. 캐릭터 만들기
2. 전투
3. 상점
4. 인벤토리
5. 퀘스트
*/

Player p1;

void CreatePlayer()
{
	char name[20];
	cout << "이름이 무엇인가요?" << endl;
	cin >> name;
	p1.SetName(name);

	int job;
	cout << "직업을 고르세요." << endl;
	cout << "1. 편의점 알바생 2. 경찰관 3. 청소부 4. 소방관 5. 의사" << endl;
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
		cout << "=====" << GetDungeonName(type) << " 던전 =====" << endl;
		cout << "=====" << pMonster->GetName() << "=====" << endl;
		cout << "레벨 :" << pMonster->GetLevel() << endl;
		cout << "HP :" << pMonster->GetHP() << endl;
		cout << "MP :" << pMonster->GetMP() << endl;
		cout << "공격력 :" << pMonster->GetAttack() << endl;
		cout << "방어력 :" << pMonster->GetDefence() << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "=====" << p1.GetName() << "=====" << endl;
		cout << "레벨 :" << p1.GetLevel() << endl;
		cout << "HP :" << p1.GetHP() << endl;
		cout << "MP :" << p1.GetMP() << endl;
		cout << "공격력 :" << p1.GetAttack() << endl;
		cout << "방어력 :" << p1.GetDefence() << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "0. 공격 1. 방어 2. 스킬 3. 아이템 4. 도망가기" << endl;
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
	cout << "0. 쉬움 1. 보통 2. 어려움 3. 헬 4. 악몽";
	cin >> select;
	Battle(static_cast<DungeonType>(select));
}

void ShowStage()
{
	int selectedStage = 0;
	cout << "0. 던전 1. 여관";
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
숙제
1. 전투 공격
- 경험치 획득
- 돈 획득
- 레벨 업(+ 풀피)

2. 도망가기

3. 여관
- 체력 회복 + 돈을 지불

4. 방어 
- 방어력을 올려서 막는 기능

5. 스킬
- 스킬 목록
- mp 깍이고 스킬 데미지로 공격!!
*/