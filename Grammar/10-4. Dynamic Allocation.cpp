#include <iostream>
using namespace std;

int abab = 0; // ���� ����

void func(int a)
{

}

void main()
{
	{
		int a = 0; //���� ����
	}

	/*���� �Ҵ� : ��Ÿ�� �߿� �޸� �Ҵ�
	
	int* pAlloc = (int*)malloc(sizeof(int));
	*pAlloc = 20;

	free(pAlloc);

	���� �Ҵ� : ������ �ܰ迡�� �޸� �Ҵ�
	*/

	/*
	C ����
	int* pAlloc = (int*)malloc(sizeof(int));
	*pAlloc = 20;

	cout << *pAlloc;
	free(pAlloc);
	*/
	
	/*
	C++ ����
	int* pAlloc = new int;
	delete pAlloc;

	C++ �迭 ���� �Ҵ� / ����
	int* pAllocList = new int[10];
	delete[] pAllocList;
	*/

	/*int* pAlloc = (int*)malloc(sizeof(int) * 10);
	pAlloc[0] = 20;*/
	int* pAlloc = new int;
	//free(pAlloc);
}

/*
�޸� ����
�ڵ� ����
- ���� ���α׷��� �ڵ尡 �ö󰡴� ����
���� ����
- ��������, �Ű�����
�� ����
- �����Ҵ�� ����
������ ����
- ���� ����

���� ����
- �ܺκ���, static ����, external
���α׷��� ó�� ���۵� �� �Ҵ�
���α׷��� ����Ǵ� ������ ����

�����Ҵ�� ����
�츮�� �����Ҵ� ��Ű�� ���� �Ҵ�
�츮�� ���� ��Ű�� ���� ����

��������
�߰�ȣ�� ����Ǵ� ���� �Ҵ�
�߰�ȣ�� ������ ���� ����
*/

/*
����
�л��������α׷�

�����Ҵ��� �̿��Ͽ� �����迭 �����

1. ���� �Ҵ�� �迭���ٰ� ���� �ִ´�.
2. �迭�� ������ ���ο� �迭�� ũ�⸦ �����Ҵ��Ѵ�.
3. ���� �迭�� ���� �ű�� ���� �迭�� ���� ��Ų��.

*/

/*
����Ʈ �ڷᱸ��
struct
{
  front
  back
}

�迭 �ڷᱸ��
{
	count;// ���� ����� ī��Ʈ
	maxCount; // ���� ����� ī��Ʈ�� max���� ũ�ų� ������ Ȯ��
}
*/