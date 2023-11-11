#include <iostream>

using namespace std;

void main()
{
	/*
	switch() - 조건 값 - 정수/명제 - 실수 안됨
	{
		case 조건:
		  // 조건에 맞으면 해당구문 실행
		  break; - 탈출
		default: - if문의 else와 동일 조건 안맞으면 실행
		  break;

		  case부터 break를 만날때가지 연속하여 실행한다.
		  break를 적절히 확인하는 습관이 중요하다.

		  case 종류는 오로지 하나만 존재한다.
	}
	*/

	int input = 10;

	//switch (input)
	//{
	//case 10:
	//	cout << "10입니다." << endl;
	//case 11:
	//	cout << "11입니다." << endl;
	//	break;
	//default: // else
	//	break;
	//}

	switch (input)
	{
	case 4:
	case 5:
		cout << "강화 성공!" << endl;
		break;
	default: // else와 동일
		cout << "조건에 맞는 값이 없습니다." << endl;
		break;
	}

	/*
	최적화
	lookup table - 미리 배열과 같은 조건 식을 만들어서 한번에 이동
	
	switch - 조건이 많으면 더 성능이 좋다.

	if - 조건이 적은 경우 성능이 좋다.
	*/

}