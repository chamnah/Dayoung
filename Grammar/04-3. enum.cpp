#include <iostream>

using namespace std;

/*
ENUM �ڷ���

default�� 0���� ���������� ������ ���� ��Ī�Ѵ�.
���ڿ� �̸��� �ٿ��� �������� ���̴� ������ �Ѵ�.

���ΰ� �̸� �ߺ� �Ұ���
*/

namespace A
{
	enum AnimalType
	{
		NONE,
		TIGER = 5,
		COW,
		RABBIT = 70,
		DOG,
		CAT
	};
}

enum TestType : short // �ڷ����� ��� ����
{
	NONE,
	TIGER,
	COW,
	RABBIT,
	DOG,
	CAT,

	END // Enum�� ������ �˼��ִ�.
};

enum class FruitType // ����ȯ �Ұ��� - ����ȯ�� ���� ����
	                 // ���ΰ� �̸� �ߺ� ����
{
	NONE,
	APPLE = 5,
	PEAR,
	PINEAPPLE
};

enum class Test2Type 
{
	NONE,
	APPLE = 5,
	PEAR,
	PINEAPPLE
};

void main()
{
	
	//AnimalType animal = CAT;

	/*if (animal == CAT)
	{
		cout << "����� �Դϴ�." << endl;
	}*/
	/*
	switch (animal)
	{
	case NONE:
	{
		int temp = 10; // {}�߰�ȣ�� Ȱ���ϸ� �ʱ�ȭ�� ���� / �Ⱦ��� �Ұ���
	}
		break;
	case TIGER:
		break;
	case COW:
		break;
	case RABBIT:
		break;
	case DOG:
		break;
	case CAT:
		cout << "����� �Դϴ�." << endl;
		break;
	default:
		break;
	}
	*/

	/*AnimalType animal;
	FruitType fruit;
	int temp = animal;
	int temp = fruit;*/

	//TIGER;
}
