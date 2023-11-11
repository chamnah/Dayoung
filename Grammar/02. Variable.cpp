/*
bit -  ��ǻ�Ϳ��� ������ �� �ִ� ���� ���� ���� / 0 or 1
1byte : 8bit 
1kb : 1024byte
1mb : 1024kb
1gb : 1024mb
1tb : 1024gb
*/

// �ڷ��� : �����͸� �����ϴ� ����
// ���� / ���� / ���� / �Ǽ�

/*
1byte
00000000
       
2^8 

�ڷ���     |  ��� ������  |     ����       |   ũ��    |  unsigned(����) 
*char            ����          -128 ~ 0 ~ 127  1byte          0 ~ 255
*bool        ����(true/false)    true/false    1byte          true/false
short           ����          -32,768 ~ 32767  2byte          0 ~ 65535
*int            ����          -21�� ~ 21��     4byte          0 ~ 42��
long            ����          -21�� ~ 21��     4byte          0 ~ 42�� 2^16 -1
long long       ����          -2^63 ~ 2^63     8byte          0 ~ 2^64 - 1
*float           �Ǽ�                           4byte
double          �Ǽ�                           8byte


char(ĳ����)
�ƽ�Ű�ڵ�
���� ����

VARCHAR(����)

*/

#include <iostream>

using namespace std;

void main()
{
    //char name; // ��ũ �� / �����Ⱚ
    
    
    //char name; // ����
    //name = '1'; // ����
    //char name1 = '1'; // �ʱ�ȭ 
    char name1('a'); //c++ �ʱ�ȭ

    //char name = 97;
    //cout << name << endl;

    //bool temp; // true / false
    //temp = -1;

    //cout << temp << endl;

    //false : 0
    //true  : 0�� �ƴ� ��

    /*short temp = 100;

    temp = 32769;
    cout << temp << endl;*/

    /*
    11111111 11111111 + 1
   1 0000000 00000000 - 1  
    */


    /*
    int : 1byte
    int : 2byte 
    int : 4byte
    long: 4byte    
    */

    //float temp = 0.f;   // float
    //double temp2 = 0.0; // double

    unsigned int temp3; // ��, ���� ��� �Ұ�
    int temp3;

    /*
    ������ - ������ ǥ���ϱ� ���ؼ� ���� ���
    
    1�� ������ : ��Ʈ�� ���� ���Ѽ� ������ ǥ���ϴ� ���

    1100 -> 0011(����)

    +0 -> -0 

    0000(+0) -> 1111(-0)

    2�� ������ : 1�Ǻ����� -> + 1

    */

    /*
    3 + 1;
     11
    0011
    0001
     100 = 4
 
    0001 -> 1110 -> 1111

    3 - 1
    111
    0011
    1111
    0010 => 2
    
    2byte
    
    +
    01111111 11111111 = 32767

    -
    1

          1  
   01111111 11111111
                   1

   10000000 00000000 = -32768
   10000000 00000001 = -32767

   01111111 11111111 
   10000000 00000001
   */


}

/*
��Ƽ����Ʈ = 1byte(����/����) / �ܱ��� �� �ѱ�(2byte)
�����ڵ� = 2byte
*/