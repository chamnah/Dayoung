#include <iostream>

int func()
{
	return 10;
}

void main()
{
	/*
	L Value - left
	R Value - right

	L value�� ������ �� �ִ�.
	R value�� ������ �� �� ����.
	*/

	/*
	int temp = 0; // temp : Lvalue / 0 : Rvalue
	0 = temp;
	"aa" = temp;

	int temp2 = func(); // ���������� ��� ������ ��
	func() = temp2; // �ӽ� ���
	*/

	//func();

	//int(0.1f) = 10; Rvalue
	//ClassA(A);

	//std::move : Lvalue -> Rvalue
	// - �����͸� �̵� �����ش�.
	//&& -> Rvalue �����ϱ� ���� �ڷ���

	//int a = 0;
	//int&& b = std::move(a);

	int* temp = new int;
	*temp = 10;
	int* temp2 = (std::move(temp)); // �̵�������
	
	temp2 = temp;
	temp = nullptr;

	int a = 0;

	/*
	�����Ϳ����� �̵������� �ᵵ �̵��ȵ�
	- ���� �����ؾߵ�

	���߿� ��� ����
	����Ʈ ������
	- c++���� ���� �ȶ��� ������
	*/

}