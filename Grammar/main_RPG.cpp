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
1. 캐릭터 만들기
2. 전투
3. 상점
4. 인벤토리
5. 퀘스트
*/

Player p1;

void TestFunc()
{

}

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

	SkillMgr* pMgr = SkillMgr::GetInst();

	p1.SetSkill(pMgr->GetSkill("미라클 어택!"));
	p1.SetSkill(pMgr->GetSkill(0));
	p1.SetSkill(pMgr->GetSkill(1));
	p1.SetSkill(pMgr->GetSkill(1));

	/*AttackSkill temp;
	temp.SetFunc(&SkillMgr::TestFunc);*/

	//상점 스킬 구매
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
	cout << "0. 쉬움 1. 보통 2. 어려움 3. 헬 4. 악몽";
	cin >> select;
	Battle(static_cast<DungeonType>(select));
}

void ShowShop()
{
	while (true)
	{
		int select = 0;
		cout << "0. 무기 상점 1. 방어구 상점 2. 포션 상점 3. 돌아가기" << endl;
		cin >> select;
		system("cls");

		if (select == 3)
		{
			break;
		}

		Shop npcShop;
		npcShop.Init(static_cast<ShopType>(select));
		npcShop.Show();

		// 함수 밖에서 해제하고 싶을 때
	}
}

void ShowStage()
{
	int selectedStage = 0;

	while (true)
	{
		cout << "0. 던전 1. 여관 2. 상점 3. 캐릭터 정보";
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
장비 장착/해제

*/


/*
던그리드 - 대학생 4명

JRPG - 마왕

전투


죽은 경우 - 돈 10프로 사라짐 / exp 0

*/

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

/* 11/11 숙제
스킬 구현하기

데미지 몇 입혔습니다.
디버프

디자인 패턴
싱글톤
팩토리
옵저버
GOF

모작 - 포폴
창작 - 포폴 + 기획
역기획
*/

/*
- 숙제
- 스피드를 고려한 스킬 사용 구현

- 가능한 선에서 해보기
- 인벤토리 구현 -> 아이템 리스트 
- 상점 구현하기(구매)
- 선택지 추가 - 나의 상태창 / 상점


+ 파일 입출력 - 캐릭터 상태 저장 및 로드
*/