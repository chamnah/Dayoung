#include <iostream>
using namespace std;

/*
c
구조체 
함수 기능 지원x

c++
구조체와 클래스 똑같다.

구조체 
- 진짜 옜날 구조체처럼 사용하기를 원한기도 한다.
*/


/* 접근 지정자
class A // 설계도
{
public:
	int a;

	void func()
	{
		a = 10;
	}
};

class B : private A // A가 부모 B가 자식 
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


// 구조체는 접근지정자가 기본으로 public이다.
class Animal // 접근지정자가 기본으로 private이다.
{
private:
	int eye;
	int legs;
	//함수는 메모리 공간을 차지하지 않는다.
public:
	void Eat(){}
	void Breathe();
	void Hunt();
	void Death();
	virtual void Howling() = 0; // 순수 가상 함수 - 만들면 추상클래스 
};

class LandAnimal : public Animal
{
	int teeth;
	void Howling() override
	{
		cout << "멍멍 으르렁";
	}
};

class CatAnimal : public LandAnimal
{
	void Howling() final
	{
		cout << "냐옹";
	}
};

class FlyingAnimal : public Animal
{
	int wing;
	virtual void Howling() 
	{
		cout << "삐약삐약";
	}
};



// 독수리 / 치타

/*
struct Job // 설계도
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
	A() // 기본 생성자
	{
		cout << "생성~~!!";
	}

	~A()
	{
		cout << "소멸~~~!!!";
	}
};
*/
//생성자와 소멸자 함수
/*
생성자 : 클래스나 구조체의 객체가 생성될 때 호출되는 함수
소멸자 : 클래스나 구조체의 객체가 소멸될 때 호출되는 함수
*/

//void func()
//{
//	A temp;
//}

void main()
{
	//func();
	//A* pTemp = new A; // 생성자 호출
	//delete pTemp; // 소멸자 호출

	//cout << sizeof(LandAnimal);

	//Animal* pAnim = new LandAnimal;

	/*Animal* pAnim = new LandAnimal;
	pAnim->Howling();

	pAnim = new FlyingAnimal;
	pAnim->Howling();*/

	//Animal* pFlyingAnim = new FlyingAnimal;

	//cout << sizeof(LandAnimal);

	/*
	Animal* pArrAnimal[10]; // 다형성

	Animal* pLandAnim = new LandAnimal;
	Animal* pFlyingAnim = new FlyingAnimal;

	func(pLandAnim);
	func(pFlyingAnim);
	*/
	/*A temp;
	temp.a;
	temp.func();*/
	/*
	클래스를 배우기 전에
	
	절차지향프로그래밍
	- 기능 단위로 실행하는 프로그래밍 기법

	객체지향프로그래밍
	- 객체 단위로 만들어진 프로그래밍 기법

	객체 : 메모리 상에 실제로 올라간 오브젝트
	*/

	/*
	객체 지향 프로그래밍
	
	1. 추상화
	  - 객체의 공통된 개념들과 기능을 모아서 하나의 설계도를 만든다.

	2. 캡슐화
	  - 외부로부터 접근을 보호하기 위한 기능

	  private : 객체 내부O, 상속X, 외부X / 객체 내부에서만 접근 가능
	  protected : 객체 내부O, 상속O, 외부X / 객체 내부와 상속 관계에서만 접근 가능
	  public : 객체 내부O, 상속O, 외부O / 모든 경우에 접근 가능

	3. 상속성
	  - 클래스가 가지고 있는 특징을 하위 클래스에게 물려주기 위한 개념

	4. 다형성
	  - 부모 자식 간에 클래스가 형변환할 수 있어서 다양한 형태로 사용할 수 있는 개념

	함수 오버로딩 - 함수 인자의 갯수 와 자료형에 따라 같은 이름의 함수를 만들 수 있는 기법
	                단, 반환형과는 관련 없음 오로지 인자를 기준으로 한다.

	함수 오버라이딩 - 상속 단계에서 부모 클래스에서 정의된 함수를 자식 클래스에서 재정의함으로써,
	                  부모 클래스 포인터로 자식클래스 기능을 사용하기 위한 용도이다.
					  단, 재정의이므로 함수를 완전히 동일하게 만들어줘야한다.
	*/

	/*
	class beverage
	{
	   int mL;
	   bool 탄산;
	   int cost;

	   void drink();
	   void open();
	   void close();

	}
	
	사과 오렌지 사이다 콜라
	*/

}

//void func1(int a) {}
//int func1(float b) {}