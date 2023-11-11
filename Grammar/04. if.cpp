#include <iostream>

using namespace std;
using std::cin;
void main()
{
	/*
	조건문
	if / switch
	
	if문
	if(명제(true/false)) 
	{
		true일 시 중괄호 구문 실행
	}
	else if(true/false)
	{
	}
	else // 위 조건이 모두 부합되지 않으면 실행
	{
	}

	if : 사용할 시 if문은 생략 불가 반드시 한개 필요.
	else if : 생략 가능 / 갯수 제한 없음
	else : 생략 가능 / 한개만 사용 가능
	*/

	//if (false) // 중괄호 없으면 범위가 한줄만 실행
	//	cout << "중괄호 안" << endl;

	//cout << "중괄호 밖" << endl;
	const int attackBuff = 0x0001;   // 2진수 : 0000000001 /10진수 1
	const int strBuff = 0x0002;	// 2진수 : 0000000010 /10진수 2
	const int dexBuff = 0x0004;	// 2진수 : 0000000100 /10진수 4

	int myBuff = attackBuff | attackBuff; // 버프 값 넣기 atackBuff + intBuff = 01001
	bool checkBuff = myBuff & attackBuff; // attackBuff 버프 검사

	/*if (checkBuff)
	{
		cout << "공격력 버프 상승!!!!" << endl;
	}
	else
	{
		cout << "버프 없음!!" << endl;
	}*/


	/*if (false)
		if (true)
			cout << "first";
		else
			cout << "second";*/

	/*
	중괄호 사용하여 if 조건 출력하는것을 추천
	*/

	//출력 - 입력

	cout << "나이를 입력하세요. " << endl;
	int input;
	cin >> input; // 입력
	
	if (input < 10)
	{
		cout << "당신은 어린이입니다." << endl;
	}
	else if (10 <= input  || input < 20)
	{
		cout << "당신은 청소년입니다." << endl;
	}
	else if (20 <= input && input < 30)
	{
		cout << "당신은 청년입니다." << endl;
	}
	else
	{
		cout << "당신은 나이가 많군요." << endl;
	}

	/*
	키를 입력하여 if문으로 각 구문에 맞는 출력
	심리검사
	*/

	//char input;
	//cin >> input; // 입력


}