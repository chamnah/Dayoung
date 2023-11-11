#include <iostream>
#include <Windows.h>
using namespace std;

#define LOTTO_MAX 45
#define SWAP_COUT 300

void main()
{
	int lottoList[LOTTO_MAX] = {};

	for (size_t i = 0; i < LOTTO_MAX; i++)
	{
		lottoList[i] = i + 1;
	}

	srand(time(NULL));

	for (size_t i = 0; i < SWAP_COUT; i++)
	{
		int rand1 = (rand() % LOTTO_MAX);
		int rand2 = (rand() % LOTTO_MAX);

		int temp = lottoList[rand1];
		lottoList[rand1] = lottoList[rand2];
		lottoList[rand2] = temp;

		Sleep(30);

		system("cls");

		for (size_t i = 0; i < 7; i++)
		{
			cout << lottoList[i] << " ";
		}
	}

	system("cls");

	cout << "로또 생성 번호" << endl;
	
	for (size_t i = 0; i < 7; i++)
	{
		cout << lottoList[i] << " ";
	}
	

}