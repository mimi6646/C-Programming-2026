// exam_17.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

#define  READ     0x01
#define  WRITE    0x02
#define  EXEC     0x04

int main()
{
    unsigned int   permission = READ | WRITE;


    printf("  READ | WRITE         permission = %d\n", permission);

    permission |= EXEC;

    printf("  READ | WRITE | EXEC  permission = %d\n", permission);
}