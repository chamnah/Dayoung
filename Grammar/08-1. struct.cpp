#include <iostream>
using namespace std;

/*
��ü�� ����� ���� ���赵
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

	//����â!!! - �޺�������, ����
	void printStatus() //  C�ϰ� ������
	{
		cout << "========== ����â ==============" << endl;
		cout << "�̸� :" << name << endl;
		cout << "���� : " << job << endl;
		cout << "���� : " << level << endl;
		cout << "���ݷ� : " << attack << endl;
		cout << "���� : " << defence << endl;
		cout << "hp : " << hp << endl;
		cout << "mp : " << mp << endl;
		cout << "�� : " << money << endl;
	}
};

int func(int a, int b);

#pragma pack(push, 1)// ���� ����
#pragma pack(1) // 1byte�� ���ڴ�.
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
����Ʈ �е� - cpu�� �޸𸮸� �о�� �� �д� Ƚ���� ���̱� ���ؼ� �� �޸� ������ �߰��� �ִ� ����̴�.
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

	strcpy_s(playerJob[WARRIOR].name, "����");
	strcpy_s(playerJob[WIZARD].name, "������");
	strcpy_s(playerJob[ARCHOR].name, "�ü�");

	Player p1 = {};

	cout << "��Ÿ�� ���迡 �°� ȯ���ϳ� �����̿�~" << endl;
	cout << "����� �̸��� �����ΰ�" << endl;
	cin >> p1.name;

	cout << p1.name << "��� �̸��̷α�" << endl;
	cout << "�ڳ��� ������ �����ϰ�" << endl;

	for (size_t i = 0; i < JobType::END; i++)
	{
		cout << i << ". " << playerJob[i].name << "\t";
	}

	system("pause");*/

	//cin >> p1.job;
	
	//p1.printStatus();
	/*
	1. �̸� ����
	2. ���� �����ϱ�
	3. ĳ���� �ɷ�ġ �����ֱ�
	*/
}

/*
	����
	- �л� ���� ���α׷�

	1. �л� ���� : �л� - �̸�, ����, ����, ����, ����, ����
	2. �޴��� ������
	   1, �л� ���
	   2, �л� ����
	   3, �л� ã��
	   4, �л� ��ü ��� + ����(����)
	   5, ���α׷� ����
	*/

int func(int a, int b)
{
	return a + b;
}