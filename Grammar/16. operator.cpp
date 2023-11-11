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
		//bool result = a == other.a ? true : false; // ���׿�����
  
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
	Op& operator++() // ���� ����
	{
		++a;
		++b;
		return *this;
	}
	
	Op& operator++(int) // ���� ���� : ���� - int
	{
		a++;
		b++;
		return *this;
	}
	//100 / 3 : 33

	//C - printf();
	//C - scanf
	/*
	(��ȯ��) operator <<(int)
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
	Op temp; // ������
	Op temp2 = temp; // ������
	temp2 = temp; // ���� ������
	*/
	/*
	int, float, short, bool; // �⺻ �ڷ���
	class, struct - Ŀ���� �ڷ��� - ������
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
		std::cout << "���� �����մϴ�.";
	}
	else
	{
		std::cout << "���� �ٸ��ϴ�.";
	}
	*/
	/*int a = 0;
	a + 10;
	a += 10;
	a++;*/

	/*
	���̵� ��
	- cout�� cin �����ؿ��� - ����

	���̵� ��
	- ���� �Ҽ��� Ŭ���� �����(�ι�° �ڸ� ������ ǥ��) - �غ��µ� ����
	- �ƹ��� ���ϱ� �� ���⸦ �Ͽ��� �ս��� �߻��Ǹ� �ȵȴ�.

	(��)�Ҽ��ο� ������ - ���� �ʿ� ����
	     int      int
	*/

	float; // �ε��Ҽ��� - 
	// �����Ҽ��� - �Ҽ��� ������ �������ִ� �Ǽ�

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
