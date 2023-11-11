#include <iostream>
using namespace std;

void main()
{
	/*
	전위 연산자, 후위 연산자
	전위 연산 : 수식 중 가장 먼저 연산한다.
	후위 연산 : 수식 중 가장 마지막에 연산한다.
	*/

	int num = 10;
	++num; // 전위 연산
	num++; // 후위 연산
	// +1한다.
	
	--num; // 전위 연산
	num--; // 후위 연산
	// -1한다.

	num += 1;
	num = num + 1;
	++num;

	int temp = 10;
	int operNum = (temp++) + 3;

	cout << "operNum :" << operNum << endl;
	cout << "temp :" << temp << endl;


	//자료형
	//size_t afaf;

	// ex)
	//int num2[20];
	//
	//size_t i = -1; // 0으로 초기화
	//while(i < 10)
	//{
	//	num2[i++];
	//}

}