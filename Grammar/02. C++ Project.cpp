#include <iostream>
#include "library.h"
//���ӽ����̽� : �̸� ����
/*
�̸� �ߺ��� ��ȸ�ϱ� ���ؼ� ����Ѵ�.

1. ���ӽ����̽�::��� ����
    std::cout
2. using namespace std; �ش� cpp������ std ���ӽ����̽� ���Ŷ�� ����
3. using std::cout; std�� �ִ� Ư�� ��ɸ� ����� �Ŷ�� ����
*/

using namespace std;

namespace A
{
	void func() // �Լ�
	{
		cout << "A ���� �����̽����� ���" << endl;
	}
}

using namespace A;
//using namespace B;

void func()
{

}



namespace B
{
	void func() // �Լ�
	{
		cout << "B ���� �����̽����� ���" << endl;
	}
}

void main()
{
	//::func(); // namespace�� ������ ���� ����� ���ڴ�.
	//A::func();
	//c++ ���ڿ� ���

	//cout << "�ȳ��ϼ���." << "ȣȣ" << "����" << endl;

	//:: namespace

	/*
	cout << 
	*/

	Player::Attack();

	/*
	h���� �����
	���ϴ� namespace �̸� ���̰�
	�ȿ� �Լ� ���� ��Ȳ ������
	*/
}