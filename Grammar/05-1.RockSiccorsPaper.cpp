#include <iostream>
#include <Windows.h>
using namespace std;
#pragma execution_character_set("utf-8")

enum RockSiccorsPaperType
{
	NONE,
	ROCK,
	SICCORS,
	PAPER
};

void main()
{
	/*
	1. 게임 시작
	2. 게임 종료
	*/

	LPCSTR;// const char[] - 1byte형 문자 ""
	LPCWSTR;// const wchar[] - 2byte형 문자 L""
	
	SMALL_RECT rect;
	rect.Left = 0;
	rect.Top = 0;
	rect.Right = 30;
	rect.Bottom = 30;

	SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &rect);

	SetConsoleOutputCP(65001);// 65001 UTF-8 콘솔 출력 시  UTF-8로 출력하겠다.
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
	cout << "	⠀⠀⠀⠀⠀⣠⡴⠖⠒⠲⠶⢤⣄⡀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀  ⠀⣠⡴⠖⠒⢶⣄⠀⠀⠀⠀⠀⠀⠀		 " << endl;
	cout << "	⠀⠀⠀⢀⡾⠁⠀⣀⠔⠁⠀ ⠈⠙⠷⣤⠦⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   ⠀⢀⡼⠋⠀ ⠀⠀⢀⡿⠀⠀⠀⠀⠀⠀⠀		" << endl;
	cout << "	 ⣠⠞⠛⠛⠛⠋⠉⠀⠀⠀⠀⠀⠀⠀⠘⢧⠈⢿⡀⢠⡶⠒⠳⠶⣄⠀⠀ ⠀ ⠀⣴⠟⠁ 　 ⠀⣰⠏⢀⣤⣤⣄⡀⠀⠀	  " << endl;
	cout << "	⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠟⠛⠛⠃⠸⡇⠈⣇⠸⡇⠀⠀⠀⠘⣇⠀ ⠀⣠⡾⠁⠀⠀ ⠀⢀⣾⣣⡴⠚⠉　⠈⠹⡆⠀	   " << endl;
	cout << "	⣹⡷⠤⠤⠤⠄⠀⠀⠀⠀⢠⣤⡤⠶⠖⠛⠀⣿⠀⣿⠀⢻⡄⠀⠀⠀⢻⣠⡾⠋⠀　⠀⠀⣠⡾⠋⠁⠀⠀　⠀⢀⣠⡾⠃⠀	  " << endl;
	cout << "	⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡤⠖⠋⢀⣿⣠⠏⠀⠀⣿⠀⠀⠀⠘⠉⠀⠀⠀⠀⠀⡰⠋⠀⠀⠀⠀　⣠⠶⠋⠁⠀⠀⠀		" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
	cout << "	⢿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡾⠋⠁⠀⠀⠠⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠁⠀ ⠀⠀⢀⣴⡿⠥⠶⠖⠛⠛⢶⡄		" << endl;
	cout << "	⠀⠉⢿⡋⠉⠉⠁⠀⠀⠀⠀⠀⢀⣠⠾⠋⠀⠀⠀⠀⢀⣰⡇⠀⠀⢀⡄⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠋⠀⠀⠀⠀⠀⢀⣠⠼⠃		" << endl;
	cout << "	⠀⠀⠈⠛⠶⠦⠤⠤⠤⠶⠶⠛⠋⠁⠀⠀⠀⠀⠀⠀⣿⠉⣇⠀⡴⠟⠁⣠⡾⠃⠀⠀⠀⠀⠀⠈⠀⠀⠀⣀⣤⠶⠛⠉⠀⠀⠀	   " << endl;
	cout << "	⠀⠀⠀⠀⢀⣠⣤⣀⣠⣤⠶⠶⠒⠶⠶⣤⣀⠀⠀⠀⢻⡄⠹⣦⠀⠶⠛⢁⣠⡴⠀⠀⠀⠀⠀⠀⣠⡶⠛⠉⠀⠀⠀⠀⠀⠀⠀	   " << endl;
	cout << "	⠀⠀⢀⡴⠋⣠⠞⠋⠁⠀⠀⠀⠀⠙⣄⠀⠙⢷⡀⠀⠀⠻⣄⠈⢷⣄⠈⠉⠁⠀⠀⠀⢀⣠⡴⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀	   " << endl;
	cout << "	⠀⢀⡾⠁⣴⠋⠰⣤⣄⡀⠀⠀⠀⠀⠈⠳⢤⣼⣇⣀⣀⠀⠉⠳⢤⣭⡿⠒⠶⠶⠒⠚⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀	  " << endl;
	cout << "	⠀⢸⠃⢰⠇⠰⢦⣄⡈⠉⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠛⠛⠓⠲⢦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀		" << endl;
	cout << "	⠀⠸⣧⣿⠀⠻⣤⡈⠛⠳⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⢻⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀	  " << endl;
	cout << "	⠀⠀⠈⠹⣆⠀⠈⠛⠂⠀⠀⠀⠀⠀⠀⠈⠐⠒⠒⠶⣶⣶⠶⠤⠤⣤⣠⡼⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀		" << endl;
	cout << "	⠀⠀⠀⠀⠹⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠳⢦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀		  " << endl;
	cout << "	⠀⠀⠀⠀⠀⠈⠻⣦⣀⠀⠀⠀⠀⠐⠲⠤⣤⣀⡀⠀⠀⠀⠀⠀⠉⢳⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀		 " << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠶⠤⠤⠤⠶⠞⠋⠉⠙⠳⢦⣄⡀⠀⠀⠀⡷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀		 " << endl;
	cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀　　　　　　　⠈⠙⠳⠦⠾⠃" << endl << endl;

	// 문자 인코딩 - 문자를 사용하는 방법
	// UTF-8 문자 인코딩  - 문자를 1 ~ 4byte로 변환하여 우리가 사용할 수 있게 변경

	system("pause");

	SetConsoleTitle(L"RockSiccorsPaperGame");//콘솔 창 타이틀 변경
	//system("mode con:cols=67 lines=36");//콘솔 창 크기 변경

	int playerNum = 0;
	cout << "0. 나가기 1. 바위 2. 가위 3. 보" << endl;
	cin >> playerNum;

	system("cls");//현재 콘솔창에 입력된 문자들 모두 제거

	srand(time(NULL));

	int comNum = (rand() % 3) + 1;

	cout << "플레이어 : " << playerNum << endl;
	cout << "컴퓨터 : " << comNum << endl;

	if (playerNum == comNum)
	{
		cout << "비겼습니다." << endl;
	}
	else if (playerNum - comNum == 2 || playerNum - comNum == -1)
	{
		cout << "이겼습니다." << endl;
	}
	else if (playerNum - comNum == -2 || playerNum - comNum == 1)
	{
		cout << "졌습니다." << endl;
	}
	else
	{
		cout << "오류 발생" << endl;
	}

	/*
	- 숙제

	1. 특수문자/ 색깔 / 콘솔창 타이틀
	내가 만든 가위바위보 게임에 추가해보기

	2. 강화 프로그램 while문으로 만들어보기
	   1. 현재 나의 강화상태 표시하기 0강
	   2. 선택지 - 1. 강화하기 2. 나가기
	   3. 강화하기 선택 시 강화 진행
	
	3. 복습
	*/
}