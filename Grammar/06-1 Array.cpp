#include <iostream>

using namespace std;

void main()
{
	/*
	배열 - 같은 자료형을 여러개를 묶은 형태	
	*/
	//int a = 0;

	//int num[10]; // 10개 분량의 int형 변수를 선언하겠다. 0 ~ 10 -1 사이의 인덱스로 접근 가능  
	//cout << sizeof(num) << endl;
	/*
	//int num[10] = {0,1,2,3}; //배열 초기화 - c
	int num[10]{1,2,3,4,5}; // 배열 초기화 - c++
	for (size_t i = 0; i < 10; i++)
	{
		cout << num[i] << endl;
	}
	*/
	//Swap - 자리를 바꾼다.

	/*int a = 10;
	int b = 20;
	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << a << "\t" << b;*/

	int a[5] = {2,4,6,8,10};
	int b[5] = {1,3,5,7,9};
	int result[10];

	//result : 1 ~ 10

	/*
	for (int resultNum = 0; resultNum < 10; resultNum++)
	{
		if ((resultNum + 1) % 2 == 0)
			result[resultNum] = a[resultNum / 2];//resultNum : 1,3,5,7,9
		else
			result[resultNum] = b[resultNum / 2];// resultNum : 0,2,4,6,8,
	}

	for (size_t i = 0; i < 5; i++)
	{
		result[(i * 2) + 1] = a[i];
		result[(i * 2) ] = b[i];
	}

	for (int i = 0; i < 10; i++)
	{
		cout << result[i] << " ";
	}
	*/

	/*
	00 01 02 03 04
	10 11 12 13 14
	20 21 22 23 24
	30 31 32 33 34
	40 41 42 43 44
	*/

	/*
	1   2  3  4  5
	6   7  8  9 10
	11 12 13 14 15
	*/

	/*
	int num[5][5] = { }; // 2차원 배열

	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			cout << num[i][j]; // i j를 이용해서 1 ~ 25
		}
		cout << endl;
	}
	

	int num1[25] = { };

	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			num1[i * 5 + j] = num[i][j];
		}
	}
	*/

	/*
	로또 생성기 - + a
	1. 1 ~ 45개의 번호 존재한다.
	2. 이 번호를 섞는다.
	3. 7개의 섞인 번호를 출력한다.
	4. 주의 : 중복된 값이 나와서는 안된다. 
	- 힌트 오늘 배운게 도움 됨
	*/



}