#include <iostream>
using namespace std;
#define BINGO_SIZE 25
#define WIDTH 5
#define HEIGHT 5
#define STAR -1

void main()
{
	int bingoList[BINGO_SIZE] = {};

	for (size_t i = 0; i < BINGO_SIZE; i++)
	{
		bingoList[i] = i + 1;
	}

	int temp = 0;
	for (size_t i = 0; i < 100; i++) 
	{
		int rand1 = rand() % BINGO_SIZE;
		int rand2 = rand() % BINGO_SIZE;

		temp = bingoList[rand1];
		bingoList[rand1] = bingoList[rand2];
		bingoList[rand2] = temp;
	}

	int input = 0;
	int bingoCount = 0;

	while (true)
	{
		system("cls");

		for (size_t i = 0; i < HEIGHT; i++)
		{
			for (size_t j = 0; j < WIDTH; j++)
			{
				if (bingoList[i * WIDTH + j] == STAR)
				{
					cout << "*" << "\t";
				}
				else
				{
					cout << bingoList[i * WIDTH + j] << "\t";
				}
			}
			cout << endl;
		}

		cout << "현재 빙고 갯수 : " << bingoCount << endl;

		cin >> input;

		bool exit = false;
		for (size_t i = 0; i < HEIGHT; i++)
		{
			for (size_t j = 0; j < WIDTH; j++)
			{
				if (bingoList[i * WIDTH + j] == input)
				{
					bingoList[i * WIDTH + j] = STAR;
					exit = true;
					break;
				}
			}

			if (exit)
			{
				break;
			}
		}

		bingoCount = 0;
		int col = 0;
		for (size_t i = 0; i < HEIGHT; i++)
		{
			int row = 0;
			int col = 0;
			for (size_t j = 0; j < WIDTH; j++) // 한 줄 순회
			{
				if (bingoList[i * WIDTH + j] == STAR)
				{
					row++;
				}

				if (bingoList[j * WIDTH + i] == STAR)
				{
					col++;
				}
			}

			if (row >= 5)
			{
				bingoCount++;
			}

			if (col >= 5)
			{
				bingoCount++;
			}
		}
	}
}

/*
5 * 5

[5][5];
1 2 3 4 5
6 7 8 9 10

숙제
- 빙고에서 대각선 검사 만들어오기 - 

- 컴퓨터 만들어보기 - 해오는 데 까지
1. rand() - 중복되지 않게 컴퓨터가 입력해야한다.
2. 컴퓨터도 빙고판이 있어야 한다. 출력도 해야댐
3. 내가 입력하면 나의 빙고판이 별로 바뀌고, 컴퓨터의 빙고판도 별로 바뀌어야함 - 컴퓨터/플레이어 둘다 적용
4. 먼저 빙고 갯수가 3개 만들어지면 승리.

0	1	2	3	4
5	6	7	8	9
10	11	12	13	14
15	16	17	18	19
20	21	22	23	24
-------------------
*/