#include <iostream>

using namespace std;

void main()
{
	srand(time(NULL));
	//time(NULL) - UTC 협정 세계 시(1972) :런던 1970년 1월 1일 0시로부터 지금까지 흐른 초
	//srand(); - 인자로 들어간 seed값으로 랜덤페이지를 변경한다.  
	//rand(); // 랜덤 함수 - 랜덤한 값을 반환한다.
	//seed라고 하는 랜덤 페이지가 
	//여러개 존재하여 해당 페이지에 해당하는 랜덤 값을 반환
	/*cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;*/

	/*
	1 ~ 100까지 범위의 값으로 랜덤한 값을 반환
	*/

	//rand() % 100 + 1; // 0 + 1 ~ 99 + 1 - 1 ~ 100
	//cout << (rand() % 101) << endl;

	/*
	랜덤 값 -200 ~ 300 사이에 값 나오게 하려면
	*/

	/*
	강화 시스템

	1. 강화 입력값
	2. 3강 이하라면 100프로 성공
	3. 4 ~ 5강 50프로 성공
	4, 5 ~ 7강 25프로 성공
	5, 8 ~ 9강 10프로 성공
	6. 실패 시 강화 수치 감소
	*/
	cout << "강화할 수치 입력하세요." << endl;
	int input = 0;
	cin >> input; // scanf

	int inin;
	scanf("%d", &inin);

	if (input < 3)
	{
		if (rand() % 100 + 1 >= 1)
			cout << "강화 성공";
	}
	else if (4 <= input && input <= 5)
	{

	}
	else if (6 <= input && input <= 7)
	{

	}
	else if (8 <= input && input <= 9)
	{

	}
}