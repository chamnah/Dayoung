#include <iostream>
using namespace std;
void main()
{
	/*
	char a = 'a';
	//char b = "bbbbbbbb";
	char szName[20] = "��ö��";
	cout << szName << endl;
	*/

	//char szTemp[20] = "�ȳ�\0�ϼ���.";//\0 ���ڿ��� ��
	//cout << szTemp << endl;

	//char szTemp[3] = "ab"; // �迭 ũ�� ���� �� \0�� ����Ͽ� �ϳ� �� ���� �����.
	//wchar_t wcsTemp[3] = L"ab"; // �����ڵ��� ���� �迭
	//TCHAR tszTemp;

	//cout << sizeof("��a��") << endl;
	//cout << sizeof(L"��a��") << endl;
	// ��Ƽ ����Ʈ / �����ڵ�
	
	/*
	��Ƽ ����Ʈ - ����� ���� ���� 1byteǥ�� �ƴϸ� 2byte
	�����ڵ� - ��� ���ڸ� 2byte�� ���
	*/

	/*
	��Ƽ����Ʈ��
	strcpy - ���ڿ� ����
	strlen - ���ڿ� ����
	strcat - ���ڿ� �̾� ���̱�
	strcmp - ���ڿ� ��
	
	wcs
	*/

	/*
	strcpy
	char szTemp[10] = "����";
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
	char szTemp[10] = "����";
	char szText[10] = "�氡";

	strcat_s(szTemp, szText);
	cout << szTemp << endl;*/

	/*char szName[10] = "abc";
	char szFind[10] = "abb";

	int find = strcmp(szName, szFind);

	if (find == 0)
	{
		cout << "ã�ҽ��ϴ�." << endl;
	}
	else if (find > 0)
	{
		cout << "����� ���� ������ �� �ڿ� �����մϴ�." << endl;
	}
	else if (find < 0)
	{
		cout << "����� ���� ������ �� �տ� �����մϴ�." << endl;
	}
	else
	{
		cout << "ã�� ���߽��ϴ�." << endl;
	}*/

	/*
	strcpy - ���ڿ� ����
	strlen - ���ڿ� ����
	strcat - ���ڿ� �̾� ���̱�
	strcmp - ���ڿ� ��

	1. ���ڿ� �ΰ��� �Է¹޴´�.
	2. ���ڿ� ���̰� �� ª�� ���ڰ� �� ������ ������ ���ļ� ���
	3. ���࿡ ���ڿ� ���̰� ���ٸ� ���������� �� ���� ���ڿ��� ������ ������ ���ļ� ���

	*/
	
	//strcat_s(result, text1);//text1 = text1 + text2
	//strcat_s(result, text2);//text1 = text1 + text2
	//cout << text1;
}