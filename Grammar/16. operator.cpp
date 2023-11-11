#include <iostream>

class Op
{
public:
	int a = 0;
	int b = 0;

public:
	void operator =(const Op& other)
	{
		a = other.a;
		b = other.b;
	}

	void operator =(const Op&& other)
	{
		a = other.a;
		b = other.b;
	}

	bool operator ==(const Op& other)
	{
		//bool result = a == other.a ? true : false; // 삼항연산자
  
		return a == other.a && b == other.b;
	}

	Op operator+ (const Op& other)
	{
		return Op{ a + other.a , b + other.b };
	}

	void operator+=(const Op& other)
	{
		a += other.a;
		b += other.b;
	}

	// -- 
	Op& operator++() // 전위 연산
	{
		++a;
		++b;
		return *this;
	}
	
	Op& operator++(int) // 후위 연산 : 인자 - int
	{
		a++;
		b++;
		return *this;
	}
	//100 / 3 : 33

	//C - printf();
	//C - scanf
	/*
	(반환형) operator <<(int)
	{

	}
	*/
	/*
	operator >> 
	*/

	operator int()
	{
		return 10;
	}

};

void main()
{

	//std::cout << 10;
	//std::cin >> ;
	Op temp, temp2, temp3;
	temp3 = temp + temp2;

	temp2 = ++temp;
	temp2 = temp++;

	temp += temp2; // temp = temp + temp2;

	/*
	Op temp; // 생성자
	Op temp2 = temp; // 생성자
	temp2 = temp; // 대입 연산자
	*/
	/*
	int, float, short, bool; // 기본 자료형
	class, struct - 커스텀 자료형 - 연산자
	*/
	/*
	Op temp;
	temp.a = 10;
	temp.b = 20;

	Op temp2;
	temp2.a = 10;
	temp2.b = 20;

	if (temp == temp2)
	{
		std::cout << "값이 동일합니다.";
	}
	else
	{
		std::cout << "값이 다릅니다.";
	}
	*/
	/*int a = 0;
	a + 10;
	a += 10;
	a++;*/

	/*
	난이도 중
	- cout과 cin 구현해오기 - 가능

	난이도 상
	- 고정 소수점 클래스 만들기(두번째 자리 까지만 표시) - 해보는데 까지
	- 아무리 더하기 및 빼기를 하여도 손실이 발생되면 안된다.

	(팁)소수부와 정수부 - 따를 필요 없음
	     int      int
	*/

	float; // 부동소수점 - 
	// 고정소수점 - 소수점 범위가 정해져있는 실수

	/*float f = 0.f;

	for (size_t i = 0; i < 999; i++)
	{
		f += 0.1f;
	}*/
	int integer = 0;

	for (size_t i = 0; i < 999; i++)
	{
		integer += 1;
	}
	//std::cout << integer;

	Op testOp;
	int vbvb = testOp;
	std::cout << vbvb;
}

/*
ConsoleOuput a = cout << "aaa"; // ConsoleOutput
a << "aaaa";
cout << "aaa" << "aaaa";
*/
