#pragma once

class TestClass
{
	//TestClass() = default; // ���� �⺻ ������ ����ϰ���
	//�⺻������/ �⺻ �Ҹ���/ �⺻ ���������
	TestClass() = delete; // ���� �⺻ ������ ��ü�� ��� ���ϰڴ�.
	~TestClass() = default;
	~TestClass() = delete;

	//c++ ���¼ҽ� 

	/*
	���¼ҽ� - ��ΰ� �ڵ带 �� �� �ְ�, ������ �� �ִ�.
	boost - ���̺귯�� 
	*/
};

/*
class SuperClass
{
protected:
	const int a;

public:
	SuperClass(); //�⺻ ������  - ����
	SuperClass(int _a); // �����ִ� ������
	SuperClass(int _a, int _b);
	~SuperClass();
};
*/
class AClass
{
protected:
	int a; // �����Ͽ� ���� �̷��� �ʱ�ȭ �ȵ� �� ����
	const int b;
public:
	AClass(); //�⺻ ������  - ����
	AClass(int _a); // �����ִ� ������
	AClass(int _a, int _b);
	AClass(const AClass& obj); // ���縦 ���� ������ 
	virtual ~AClass(); // ���� �Ҹ���
};

class BClass : public AClass/*, public SuperClass*/
{
private:
	int c;
	int* ptrA;

public:
	// default delete
	/*
	default : �⺻ ������ �� �Ҹ��� ����ϰڴ�.
	*/
	BClass(); //�⺻ ������  - ����
	BClass(int _a); // �����ִ� ������
	BClass(int _a, int _b);
	BClass(const BClass& obj); // Lvalue
	BClass(const BClass&& obj);// Rvalue
	~BClass();

	//void func()
	//{
	//	//a = 20;
	//	// a�� �ٲٱ�
	//}
};

// �����ڿ� �Ҹ���
// ������



/*

*/









//��� ���Ͽ� ����
//cpp���� ����
/*
��� ���ϸ� �����ؼ� ��������ν� �ڵ� �� ��ü�� ���̰�, �������� �ø��� ����
����ӵ��� ��������.
- ��� ������ �����ϸ� �����ϴ� cpp�� ��� ���� �����ؾ��ϹǷ� �����θ� ������ ������ ���� �پ���.

ȸ�翡���� ��ũ���� ���� - ��ǰ��
*/