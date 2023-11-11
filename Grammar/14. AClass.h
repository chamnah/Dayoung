#pragma once

class TestClass
{
	//TestClass() = default; // 나는 기본 생성자 사용하겠음
	//기본생성자/ 기본 소멸자/ 기본 복사생성자
	TestClass() = delete; // 나는 기본 생성자 자체를 사용 안하겠다.
	~TestClass() = default;
	~TestClass() = delete;

	//c++ 오픈소스 

	/*
	오픈소스 - 모두가 코드를 볼 수 있고, 수정할 수 있다.
	boost - 라이브러리 
	*/
};

/*
class SuperClass
{
protected:
	const int a;

public:
	SuperClass(); //기본 생성자  - 선언
	SuperClass(int _a); // 인자있는 생성자
	SuperClass(int _a, int _b);
	~SuperClass();
};
*/
class AClass
{
protected:
	int a; // 컴파일에 따라서 이렇게 초기화 안될 수 있음
	const int b;
public:
	AClass(); //기본 생성자  - 선언
	AClass(int _a); // 인자있는 생성자
	AClass(int _a, int _b);
	AClass(const AClass& obj); // 복사를 위한 생성자 
	virtual ~AClass(); // 가상 소멸자
};

class BClass : public AClass/*, public SuperClass*/
{
private:
	int c;
	int* ptrA;

public:
	// default delete
	/*
	default : 기본 생성자 및 소멸자 사용하겠다.
	*/
	BClass(); //기본 생성자  - 선언
	BClass(int _a); // 인자있는 생성자
	BClass(int _a, int _b);
	BClass(const BClass& obj); // Lvalue
	BClass(const BClass&& obj);// Rvalue
	~BClass();

	//void func()
	//{
	//	//a = 20;
	//	// a값 바꾸기
	//}
};

// 생성자와 소멸자
// 맛보기



/*

*/









//헤더 파일에 선언
//cpp파일 구현
/*
헤더 파일만 참조해서 사용함으로써 코드 양 자체를 줄이고, 가독성을 올리기 위함
빌드속도가 빨라진다.
- 헤더 파일을 수정하면 참조하는 cpp를 모두 새로 빌드해야하므로 구현부를 나누면 수정할 일이 줄어든다.

회사에서는 인크리디 빌드 - 제품명
*/