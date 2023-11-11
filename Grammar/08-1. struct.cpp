#include <iostream>
using namespace std;

/*
객체를 만들기 위한 설계도
*/

enum JobType
{
	WARRIOR,
	WIZARD,
	ARCHOR,
	END
};

struct Job
{
	char name[10];
};

struct Player
{
	char name[10];
	int level;
	int attack;
	int defence;
	int hp;
	int mp;
	char job[10];
	int money;

	//상태창!!! - 달빛조각사, 위드
	void printStatus() //  C하고 차이점
	{
		cout << "========== 상태창 ==============" << endl;
		cout << "이름 :" << name << endl;
		cout << "직업 : " << job << endl;
		cout << "레벨 : " << level << endl;
		cout << "공격력 : " << attack << endl;
		cout << "방어력 : " << defence << endl;
		cout << "hp : " << hp << endl;
		cout << "mp : " << mp << endl;
		cout << "돈 : " << money << endl;
	}
};

int func(int a, int b);

#pragma pack(push, 1)// 범위 지정
#pragma pack(1) // 1byte씩 쓰겠다.
struct A
{
	int  num; // 4byte 
	char text2; // 1byte   
	char text; // 1byte / wchar_t 2byte
};
#pragma pack(pop)
struct B
{
	char tex1;
	int  num;
};
/*
바이트 패딩 - cpu가 메모리를 읽어올 때 읽는 횟수를 줄이기 위해서 빈 메모리 공간을 추가로 넣는 기법이다.
*/


void main()
{
	cout << sizeof(B);

	/*Player p1;
	p1.level = 10;
	p1.money = 10;

	Player p2 = {20,30};
	cout << p2.level << endl;
	cout << p2.money << endl;

	Player p3 = {};
	cout << p3.level << endl;
	cout << p3.money << endl;*/

	/*Job playerJob[JobType::END];

	strcpy_s(playerJob[WARRIOR].name, "전사");
	strcpy_s(playerJob[WIZARD].name, "마법사");
	strcpy_s(playerJob[ARCHOR].name, "궁수");

	Player p1 = {};

	cout << "판타지 세계에 온걸 환영하네 젊은이여~" << endl;
	cout << "당신의 이름은 무엇인가" << endl;
	cin >> p1.name;

	cout << p1.name << "라는 이름이로군" << endl;
	cout << "자네의 직업을 선택하게" << endl;

	for (size_t i = 0; i < JobType::END; i++)
	{
		cout << i << ". " << playerJob[i].name << "\t";
	}

	system("pause");*/

	//cin >> p1.job;
	
	//p1.printStatus();
	/*
	1. 이름 짓기
	2. 직업 선택하기
	3. 캐릭터 능력치 보여주기
	*/
}

/*
	숙제
	- 학생 관리 프로그램

	1. 학생 정보 : 학생 - 이름, 나이, 영어, 수학, 국어, 총점
	2. 메뉴가 존재함
	   1, 학생 등록
	   2, 학생 삭제
	   3, 학생 찾기
	   4, 학생 전체 출력 + 알파(필터)
	   5, 프로그램 종료
	*/

int func(int a, int b)
{
	return a + b;
}