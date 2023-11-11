#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

#define GAME_WIDTH 40
#define GAME_HEIGHT 30
#define BULLET_MAX_NUM 30

wchar_t DrawBuffer[GAME_HEIGHT][GAME_WIDTH]; // 새롭게 그려진 화면을 출력 - 현재 화면

struct Object
{
	int hp;
	int width;
	int posX;
	int posY;
	const wchar_t* image;
	const wchar_t* hpUI = nullptr;

	void RenderObject()
	{
		int imageX = 0;
		while (true)
		{
			if (image[imageX] == L'\0')
			{
				break;
			}

			DrawBuffer[posY][posX + imageX] = image[imageX];
			++imageX;
		}

		if (hpUI != nullptr)
		{
			RenderUI();
		}
	}

	void RenderUI()
	{
		int startX = posX + (width / 2) - (hp / 2);

		for (size_t i = 0; i < hp; i++)
		{
			DrawBuffer[posY + 1][startX + i] = hpUI[0];
		}
	}
};

Object Player;
Object Monster;
Object* Bullet[BULLET_MAX_NUM];
int score = 0;

void SetObject()
{
	Player.posX = 15;
	Player.posY = 10;
	Player.image = L">-0-<";
	Player.width = wcslen(Player.image) + 1;
	
	Monster.posX = 15;
	Monster.posY = 1;
	Monster.image = L"<0ㅡ 0>";
	Monster.width = wcslen(Monster.image) + 1;
	Monster.hp = 5;
	Monster.hpUI = L"=";

	for (size_t i = 0; i < BULLET_MAX_NUM; i++)
	{
		Bullet[i] = nullptr;
	}
}

void SetGameOption()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
	GetConsoleScreenBufferInfo(hConsole, &bufferInfo);

	wcout.imbue(locale("Kor"));

	for (size_t i = 0; i < GAME_HEIGHT; i++)
	{
		for (size_t j = 0; j < GAME_WIDTH; j++)
		{
			DrawBuffer[i][j] = L' ';
		}
	}
	
	system("mode con:cols=80 lines=45");

	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = false;
	cursorInfo.dwSize = 1; // 1 ~ 100

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

void Fire()
{
	for (size_t i = 0; i < BULLET_MAX_NUM; i++)
	{
		if (Bullet[i] == nullptr)
		{
			Bullet[i] = new Object;
			Bullet[i]->posX = Player.posX + (Player.width / 2);
			Bullet[i]->posY = Player.posY;
			Bullet[i]->image = L"l";
			break;
		}
	}
}

bool KeyInput()
{
	// 키 입력하고 엔터눌러야댐
	/*scanf();
	cin;*/
	
	if (_kbhit() != 0) // keyboard hit
	{
		switch (_getch())
		{
		case 'w':
		case 'W':
			Player.posY -= 1;
			break;
		case 's':
		case 'S':
			Player.posY += 1;
			break;
		case 'a':
		case 'A':
			Player.posX -= 1;
			break;
		case 'd':
		case 'D':
			Player.posX += 1;
			break;
		case ' ':
			Fire();
			break;
		default:
			break;
		}

		if (Player.posX <= 0)
		{
			Player.posX = 0;
		}
		else if (GAME_WIDTH - Player.width <= Player.posX )
		{
			Player.posX = GAME_WIDTH - Player.width - 1;
		}

		if (Player.posY <= 0)
		{
			Player.posY = 0;
		}
		else if (GAME_HEIGHT <= Player.posY)
		{
			Player.posY = GAME_HEIGHT - 1;
		}
	}

	return true;
}

void SetDrawBuffer(int posX, int posY, const wchar_t* pImage)
{
	int imageX = 0;
	while (true)
	{
		//if (*(pImage + imageX) == L'\0')
		if (pImage[imageX] == L'\0')
		{
			break;
		}

		DrawBuffer[posY][posX + imageX] = pImage[imageX];
		//DrawBuffer[posY][posX + imageX] = *(pImage + imageX);
		++imageX;
	}
}

void RenderBuffer()
{
	for (size_t hei = 0; hei < GAME_HEIGHT; hei++)
	{
		for (size_t wid = 0; wid < GAME_WIDTH; wid++)
		{
			COORD pos = { wid, hei };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			wcout << DrawBuffer[hei][wid];
		}
	}

	for (size_t hei = 0; hei < GAME_HEIGHT; hei++)
	{
		for (size_t wid = 0; wid < GAME_WIDTH; wid++)
		{
			DrawBuffer[hei][wid] = L' ';
		}
	}
}

void Update()
{
	for (size_t i = 0; i < BULLET_MAX_NUM; i++)
	{
		if (Bullet[i] != nullptr)
		{
			Bullet[i]->posY -= 1;


			if (Bullet[i]->posY < 0)
			{
				delete Bullet[i];
				Bullet[i] = nullptr;
			}
		}
	}

	for (size_t i = 0; i < BULLET_MAX_NUM; i++)
	{
		if (Bullet[i] == nullptr)
		{
			continue;
		}

		if (Bullet[i]->posY == Monster.posY)
		{
			int a = 0;
		}

		if (Bullet[i]->posY == Monster.posY &&
			Monster.posX <= Bullet[i]->posX  && Bullet[i]->posX + Bullet[i]->width <= Monster.posX + Monster.width)
		{
			score++;
			Monster.hp -= 1;
		}
	}

}

void RenderBorder()
{
	int i = 0;
	for (size_t j = 0; j < GAME_HEIGHT; j++)
	{
		SetDrawBuffer(i, j, L"|");
	}

	i = GAME_WIDTH - 1;
	
	for (size_t j = 0; j < GAME_HEIGHT; j++)
	{
		SetDrawBuffer(i, j, L"|");
	}

	i = GAME_HEIGHT - 1;

	for (size_t j = 0; j < GAME_WIDTH; j++)
	{
		SetDrawBuffer(j, i, L"=");
	}
}

void RenderConsole()
{
	RenderBorder();
	Player.RenderObject();
	Monster.RenderObject();

	for (size_t i = 0; i < BULLET_MAX_NUM; i++)
	{
		if (Bullet[i] != nullptr)
		{
			Bullet[i]->RenderObject();
		}
	}
	
	// 참고 : Object인자로 넘겨서 줄일 수 도 있다. 

	RenderBuffer();

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), COORD{0, GAME_HEIGHT + 3});
	wcout << L"Score : " << score;

	Sleep(20);
}

void main()
{
	SetObject();
	SetGameOption();

	while (KeyInput())
	{
		Update();
		RenderConsole();
	}
}

/* 10/15 숙제
1. 몬스터 체력 - 표시
   - 몬스터 체력이 깍이고, 0이면 되면 죽는다.

2. 몬스터 이동 - 타임 함수 clock() / 프레임 인덱스
   
3. 몬스터 피격 상태
   1. 몬스터가 한대 맞으면 피격 모습으로 바뀌어서 보이기
   2. 몬스터 피격 모습일때는 데미지가 들어가지 않는다.
*/

/*
C++ 테트리스
WinAPI : 스타크래프트
Dx : 내가 만들고 싶은거 똑같이

14일 숙제
1. 범위 밖으로 나가지 않게 막기
2. 스페이스 바를 누르면 총알 뿅뿅 쏜다.
   - 스페이스 바를 누르면 총알을 동적할당시켜서 생성 후 이동
   - 총알이 범위 밖을 벗어나면 제거
*/