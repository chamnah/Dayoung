#include <iostream>

using namespace std;

void main()
{
	int numList[10] = {1,2,3,4,5,6,7,8,9,10}; 

	int* pInt = numList; //배열의 이름 자체가 0번째 배열의 주소 이름이다.
	pInt = &numList[0]; //위와 같은 의미이다.
	pInt[3] = 10;

	/*
	cout << pInt[2];
	cout << *(numList+2);

	cout << numList[2];
	cout << *(pInt + 2);
	*/
	
	/*for (size_t i = 0; i < 10; i++)
	{
		cout << numList[i] << ",";
	}*/

	/*
	for (size_t i = 0; i < 10; i++)
	{
		cout << *pInt << ",";
		pInt += 1; // 내가 가리키는 자료형의 크기만큼 다음 주소를 가리킨다.
	}
	*/
}