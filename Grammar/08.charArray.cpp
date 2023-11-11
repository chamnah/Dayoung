#include <iostream>
using namespace std;
void main()
{
	/*
	char a = 'a';
	//char b = "bbbbbbbb";
	char szName[20] = "김철수";
	cout << szName << endl;
	*/

	//char szTemp[20] = "안녕\0하세요.";//\0 문자열의 끝
	//cout << szTemp << endl;

	//char szTemp[3] = "ab"; // 배열 크기 잡을 때 \0을 고려하여 하나 더 많이 만든다.
	//wchar_t wcsTemp[3] = L"ab"; // 유니코드형 문자 배열
	//TCHAR tszTemp;

	//cout << sizeof("안a녕") << endl;
	//cout << sizeof(L"안a녕") << endl;
	// 멀티 바이트 / 유니코드
	
	/*
	멀티 바이트 - 영어와 숫자 등을 1byte표현 아니면 2byte
	유니코드 - 모든 문자를 2byte로 사용
	*/

	/*
	멀티바이트용
	strcpy - 문자열 복사
	strlen - 문자열 길이
	strcat - 문자열 이어 붙이기
	strcmp - 문자열 비교
	
	wcs
	*/

	/*
	strcpy
	char szTemp[10] = "하이";
	char szText[10];
	
	strcpy_s(szText, szTemp);*/

	//cout << szText << endl;

	/*
	strlen
	int strLength = strlen(szTemp);
	cout << strLength << endl;
	cout << sizeof(szTemp) << endl;
	*/
	
	/*
	strcat
	char szTemp[10] = "하이";
	char szText[10] = "방가";

	strcat_s(szTemp, szText);
	cout << szTemp << endl;*/

	/*char szName[10] = "abc";
	char szFind[10] = "abb";

	int find = strcmp(szName, szFind);

	if (find == 0)
	{
		cout << "찾았습니다." << endl;
	}
	else if (find > 0)
	{
		cout << "대상이 사전 순으로 더 뒤에 존재합니다." << endl;
	}
	else if (find < 0)
	{
		cout << "대상이 사전 순으로 더 앞에 존재합니다." << endl;
	}
	else
	{
		cout << "찾지 못했습니다." << endl;
	}*/

	/*
	strcpy - 문자열 복사
	strlen - 문자열 길이
	strcat - 문자열 이어 붙이기
	strcmp - 문자열 비교

	1. 문자열 두개를 입력받는다.
	2. 문자열 길이가 더 짧은 문자가 더 앞으로 오도록 합쳐서 출력
	3. 만약에 문자열 길이가 같다면 사전순으로 더 빠른 문자열이 앞으로 오도록 합쳐서 출력

	*/
	
	//strcat_s(result, text1);//text1 = text1 + text2
	//strcat_s(result, text2);//text1 = text1 + text2
	//cout << text1;
}