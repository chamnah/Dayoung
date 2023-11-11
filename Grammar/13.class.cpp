#include <iostream>
using namespace std;

/*
c
����ü 
�Լ� ��� ����x

c++
����ü�� Ŭ���� �Ȱ���.

����ü 
- ��¥ ���� ����üó�� ����ϱ⸦ ���ѱ⵵ �Ѵ�.
*/


/* ���� ������
class A // ���赵
{
public:
	int a;

	void func()
	{
		a = 10;
	}
};

class B : private A // A�� �θ� B�� �ڽ� 
{
	void funcB()
	{
		a = 10;
	}
};

class C : public B
{
	void funcC()
	{
		a = 10;
	}
};
*/


// ����ü�� ���������ڰ� �⺻���� public�̴�.
class Animal // ���������ڰ� �⺻���� private�̴�.
{
private:
	int eye;
	int legs;
	//�Լ��� �޸� ������ �������� �ʴ´�.
public:
	void Eat(){}
	void Breathe();
	void Hunt();
	void Death();
	virtual void Howling() = 0; // ���� ���� �Լ� - ����� �߻�Ŭ���� 
};

class LandAnimal : public Animal
{
	int teeth;
	void Howling() override
	{
		cout << "�۸� ������";
	}
};

class CatAnimal : public LandAnimal
{
	void Howling() final
	{
		cout << "�Ŀ�";
	}
};

class FlyingAnimal : public Animal
{
	int wing;
	virtual void Howling() 
	{
		cout << "�߾�߾�";
	}
};



// ������ / ġŸ

/*
struct Job // ���赵
{
private:
	int a;
protected:
	int b;
public:
	int c;
};
*/

//void func(Animal* pAnim)
//{
//
//}
/*
class A
{
public:
	A() // �⺻ ������
	{
		cout << "����~~!!";
	}

	~A()
	{
		cout << "�Ҹ�~~~!!!";
	}
};
*/
//�����ڿ� �Ҹ��� �Լ�
/*
������ : Ŭ������ ����ü�� ��ü�� ������ �� ȣ��Ǵ� �Լ�
�Ҹ��� : Ŭ������ ����ü�� ��ü�� �Ҹ�� �� ȣ��Ǵ� �Լ�
*/

//void func()
//{
//	A temp;
//}

void main()
{
	//func();
	//A* pTemp = new A; // ������ ȣ��
	//delete pTemp; // �Ҹ��� ȣ��

	//cout << sizeof(LandAnimal);

	//Animal* pAnim = new LandAnimal;

	/*Animal* pAnim = new LandAnimal;
	pAnim->Howling();

	pAnim = new FlyingAnimal;
	pAnim->Howling();*/

	//Animal* pFlyingAnim = new FlyingAnimal;

	//cout << sizeof(LandAnimal);

	/*
	Animal* pArrAnimal[10]; // ������

	Animal* pLandAnim = new LandAnimal;
	Animal* pFlyingAnim = new FlyingAnimal;

	func(pLandAnim);
	func(pFlyingAnim);
	*/
	/*A temp;
	temp.a;
	temp.func();*/
	/*
	Ŭ������ ���� ����
	
	�����������α׷���
	- ��� ������ �����ϴ� ���α׷��� ���

	��ü�������α׷���
	- ��ü ������ ������� ���α׷��� ���

	��ü : �޸� �� ������ �ö� ������Ʈ
	*/

	/*
	��ü ���� ���α׷���
	
	1. �߻�ȭ
	  - ��ü�� ����� ������ ����� ��Ƽ� �ϳ��� ���赵�� �����.

	2. ĸ��ȭ
	  - �ܺηκ��� ������ ��ȣ�ϱ� ���� ���

	  private : ��ü ����O, ���X, �ܺ�X / ��ü ���ο����� ���� ����
	  protected : ��ü ����O, ���O, �ܺ�X / ��ü ���ο� ��� ���迡���� ���� ����
	  public : ��ü ����O, ���O, �ܺ�O / ��� ��쿡 ���� ����

	3. ��Ӽ�
	  - Ŭ������ ������ �ִ� Ư¡�� ���� Ŭ�������� �����ֱ� ���� ����

	4. ������
	  - �θ� �ڽ� ���� Ŭ������ ����ȯ�� �� �־ �پ��� ���·� ����� �� �ִ� ����

	�Լ� �����ε� - �Լ� ������ ���� �� �ڷ����� ���� ���� �̸��� �Լ��� ���� �� �ִ� ���
	                ��, ��ȯ������ ���� ���� ������ ���ڸ� �������� �Ѵ�.

	�Լ� �������̵� - ��� �ܰ迡�� �θ� Ŭ�������� ���ǵ� �Լ��� �ڽ� Ŭ�������� �����������ν�,
	                  �θ� Ŭ���� �����ͷ� �ڽ�Ŭ���� ����� ����ϱ� ���� �뵵�̴�.
					  ��, �������̹Ƿ� �Լ��� ������ �����ϰ� ���������Ѵ�.
	*/

	/*
	class beverage
	{
	   int mL;
	   bool ź��;
	   int cost;

	   void drink();
	   void open();
	   void close();

	}
	
	��� ������ ���̴� �ݶ�
	*/

}

//void func1(int a) {}
//int func1(float b) {}