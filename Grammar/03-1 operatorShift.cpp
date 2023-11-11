#include <iostream>
#include <Windows.h>
using namespace std;

void main()
{
	//int
	// 메모리 절약 - 
	// 상위 비트        / 하위 비트
	//00000000 00000000 / 00000000 00000000

	int position = 0; // x | y
	int y = 1; // 0001
	int x = 4; // 0010

	position = x;   //00000000 00000000 00000000 00000010
	position <<= 16;//00000000 00000010 00000000 00000000
	position += y;  //00000000 00000010 00000000 00000001

	// pos : 00000000 00000100 00000000 00000001
	
	//cout << position << endl; // 131073
	
	x = position >> 16;
	//cout << "x :" << x << endl;

	y = position << 16;
	y = y >> 16;
	//cout << "y :" << y << endl;

	cout << "x :" << HIWORD(position) << endl;// 상위 비트
	cout << "y :" << LOWORD(position) << endl;// 하위 비트
}

	//0001
	// 10
	// +1
	// << 17 : 00000000 00000100 00000000 00000000
	// +1      00000000 00000010 00000000 00000001
	// <<  0   00000000 00000010 00000000 00000001


	/*
	숙제
	         x          y          z            w
	pos : 00000000 / 00000000 / 00000000 / 00000000

	x : 3
	y : 4
	z : 7
	w : 9

	1. int pos = 0; - 값에 x,y,z,w를 위와 같이 1byte씩 쪼개어 담는다.
	2. 담긴 pos를 x,y,z,w값을 추출해서 출력하시오.

	공지 - 다음 시간
	조건문 - if문 - 
*/