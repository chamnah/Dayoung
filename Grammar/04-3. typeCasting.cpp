#include <iostream>
using namespace std;

enum class Test2Type
{
	NONE,
	APPLE = 5,
	PEAR,
	PINEAPPLE
};

enum Type
{
	NONE,
	ROCK,
	SICCORS,
	PAPER
};

/*
ROCK = 1
SICCORS = 2
PAPER = 3

PAPER ROCK �̱�
3   -   1  = 2 �̱�

PAPER SICCORS ��
3   -   2 = 1 ��

SICCORS ROCK
2    -    1 ��

SICCORS   PAPER
2     -     3   2 �̱�
  
ROCK   SICCORS
1    -     2 1 ��

ROCK    PAPER
1    -     3 2 �̱�

if( == -2 && == 2)
{
	�̱�
}
*/

void main()
{
	/*
	type casting : ����ȯ
	*/

	/*
	C ��Ÿ�� - ���� ����ȯ / �����̵� ����ȯ ����
	(�ڷ���)����
	ex (int)intNum;

	float intNum = 0;
	short num = (short)intNum;

	C++ ��Ÿ�� - ������ �����Ͽ� ���� �� �����ϰ� ����ȯ
	static_cast : ������ ����ȯ�� ��������� ��Ű�� ����ȯ
	dynamic_cast : Ŭ������ �θ� �ڽ� ���� ���踦 ����ȯ �����ش�. 
	const_cast : const�� �����ϴ� ĳ������ ���ش�. - const�� �ֱ⵵ ����
	 - �̰Ŵ� �ظ��ϸ� ��� ���ϴ°� ����.
	reinterpret_cast : ���� ����ȯ
	 - ����� �� �ϴ°� ������, ���� �� ���� ���� ���
	*/
	
	float intNum = 0;
	short num = static_cast<short>(intNum);

	int testNum = static_cast<int>(Test2Type::APPLE); // C++ 
	int testNum = (int)(Test2Type::APPLE); // C


	int input;
	cin >> input;
	
	sizeof(int); // 4byte

	/*
	����
	
	switch - rand

	���� ���� ��

	1. ���� ���ڸ� �Է��Ͽ� ����, ����, ���߿� �ϳ��� ����.
	2. ��ǻ�ʹ� rand�� �̿��Ͽ� ����, ����, �� �߿� �ϳ��� �����Ѵ�.
	3. �ΰ��� ���� ���Ͽ� ���� �̰��. ����. ����. ���� ���� �޽����� ����Ѵ�.
	4. �ִ��� ������ ���� �غ��� �� ����.(rand, switch ��)
	*/



	/*
	
	*/
}