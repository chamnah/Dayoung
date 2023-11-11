#include <iostream>
using namespace std;

void main()
{
	short testList[10] = { 1,2,3,4,5,6,7,8,9 };
	int* pValue = (int*)testList;
	int result = *((short*)(pValue + 2));
	cout << result;
}