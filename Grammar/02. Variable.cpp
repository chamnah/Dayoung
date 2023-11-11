/*
bit -  컴퓨터에서 저장할 수 있는 가장 작은 단위 / 0 or 1
1byte : 8bit 
1kb : 1024byte
1mb : 1024kb
1gb : 1024mb
1tb : 1024gb
*/

// 자료형 : 데이터를 저장하는 형태
// 정수 / 문자 / 명제 / 실수

/*
1byte
00000000
       
2^8 

자료형     |  취급 데이터  |     범위       |   크기    |  unsigned(범위) 
*char            문자          -128 ~ 0 ~ 127  1byte          0 ~ 255
*bool        명제(true/false)    true/false    1byte          true/false
short           정수          -32,768 ~ 32767  2byte          0 ~ 65535
*int            정수          -21억 ~ 21억     4byte          0 ~ 42억
long            정수          -21억 ~ 21억     4byte          0 ~ 42억 2^16 -1
long long       정수          -2^63 ~ 2^63     8byte          0 ~ 2^64 - 1
*float           실수                           4byte
double          실수                           8byte


char(캐릭터)
아스키코드
숫자 문자

VARCHAR(바차)

*/

#include <iostream>

using namespace std;

void main()
{
    //char name; // 정크 값 / 쓰레기값
    
    
    //char name; // 선언
    //name = '1'; // 대입
    //char name1 = '1'; // 초기화 
    char name1('a'); //c++ 초기화

    //char name = 97;
    //cout << name << endl;

    //bool temp; // true / false
    //temp = -1;

    //cout << temp << endl;

    //false : 0
    //true  : 0이 아닌 값

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

    unsigned int temp3; // 단, 음수 사용 불가
    int temp3;

    /*
    보수법 - 음수를 표현하기 위해서 만든 기법
    
    1의 보수법 : 비트를 반전 시켜서 음수를 표현하는 방법

    1100 -> 0011(음수)

    +0 -> -0 

    0000(+0) -> 1111(-0)

    2의 보수법 : 1의보수법 -> + 1

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
멀티바이트 = 1byte(영어/숫자) / 외국어 등 한글(2byte)
유니코드 = 2byte
*/