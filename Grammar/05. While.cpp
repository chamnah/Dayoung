
#include <iostream>

using namespace std;

int main()
{
	/*
	반복문 - 연속으로 반복시키는 구문
	while, do while, for
	
	while - if

	if(true or false)
	{
		// true면 실행
	}

	while(true or false)
	{
		// true면 실행  - false가 될때까지 계속 실행
	}
	*/
	// 무한 루프 : 반복이 무한정 끝나지 않고 실행되는 현상 - 컴퓨터 멈춤

	//while (true)
	//{
	//	cout << "반복 실행" << endl;

	//	if (true)
	//	{
	//		break; // break문으로 while을 탈출할 수 있다.
	//	}
	//}

	//int num = 0;
	//while (num < 3)
	//{
	//	cout << "반복 실행1" << endl;
	//	++num;
	//	if (true)
	//	{
	//		continue; // 코드 간결 - 아래 구문 실행 안하고 넘김
	//	}

	//	cout << "반복 실행2" << endl;
	//}
	
	/*
	do while문

	- while문하고 동일하게 true면 계속 반복
	- 무조건 1회는 실행
	*/

	/*while (false)
	{
		cout << "반복 실행!!!" << endl;
	}*/

	/*int num = 0;

	do
	{
		cout << "반복 실행!!!" << endl;
		++num;
	} while (num == 0);*/

	return 0;
}

//std::abs(2); // 절대값 -기호 제거
//char szText1[10];
//char szText2[10];

//scanf_s("%s", szText, 10);
//scanf_s("%[^\n]", szText1, 10);
//cin >> szText1 >> szText2;
//cin.getline(szText1, 10);