// exam_15.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int   total = 7384;

    int   hours = total / 3600;
    int   minutes = (total % 3600) / 60;
    int   seconds = total % 60;

    printf("%d초는 %d시간 %d분 %d초입니다.\n", total, hours, minutes, seconds);
}