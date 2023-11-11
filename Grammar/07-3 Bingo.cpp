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

		cout << "���� ���� ���� : " << bingoCount << endl;

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
			for (size_t j = 0; j < WIDTH; j++) // �� �� ��ȸ
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

����
- ������ �밢�� �˻� �������� - 

- ��ǻ�� ������ - �ؿ��� �� ����
1. rand() - �ߺ����� �ʰ� ��ǻ�Ͱ� �Է��ؾ��Ѵ�.
2. ��ǻ�͵� �������� �־�� �Ѵ�. ��µ� �ؾߴ�
3. ���� �Է��ϸ� ���� �������� ���� �ٲ��, ��ǻ���� �����ǵ� ���� �ٲ����� - ��ǻ��/�÷��̾� �Ѵ� ����
4. ���� ���� ������ 3�� ��������� �¸�.

0	1	2	3	4
5	6	7	8	9
10	11	12	13	14
15	16	17	18	19
20	21	22	23	24
-------------------
*/