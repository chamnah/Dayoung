#include <iostream>

using namespace std;

/*
ENUM 자료형

default로 0부터 순차적으로 정수와 값을 매칭한다.
숫자에 이름을 붙여서 가독성을 높이는 역할을 한다.

내부값 이름 중복 불가능
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

enum TestType : short // 자료형을 명시 가능
{
	NONE,
	TIGER,
	COW,
	RABBIT,
	DOG,
	CAT,

	END // Enum의 갯수를 알수있다.
};

enum class FruitType // 형변환 불가능 - 형변환을 막기 위함
	                 // 내부값 이름 중복 가능
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
		cout << "고양이 입니다." << endl;
	}*/
	/*
	switch (animal)
	{
	case NONE:
	{
		int temp = 10; // {}중괄호를 활용하면 초기화가 가능 / 안쓰면 불가능
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
		cout << "고양이 입니다." << endl;
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
