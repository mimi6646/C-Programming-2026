#include <stdio.h>

int main()
{
    int   score = 75;
    int   attendance = 85;

    int   passed;

    printf("  score = %d\n", score);
    printf("  attendance = %d\n", attendance);

    if (score >= 60 && attendance >= 80)
        printf("  passed = Acceopted\n");
    else
        printf("  passed = Denied\n");

}