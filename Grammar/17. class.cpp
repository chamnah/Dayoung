class A
{
public:
	void Output() {}
};

#include <iostream>

int main()
{
	//A cout;
	//auto aaa = cout.Output();

	int B = 10;
	int* pB = &B;
	*pB = 20;

	std::cout << std::endl;

	int integer = 0;
	char letter;
	const char& a = letter;
	//scanf_s("%*d", &integer); // 입력은 하되, 입력버퍼에 저장하지 마라
	//scanf_s("%d", &integer);
	//scanf_s("%d", &integer);
	//scanf_s("%d", &integer);
	//scanf_s("%*c", &integer);

	//원인
	/*
	scanf 10 \n - 입력 버퍼에 \n안사라짐


	*/
}