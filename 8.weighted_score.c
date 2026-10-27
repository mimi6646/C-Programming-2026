#include <stdio.h>

int main()
{
    int    middle_score, final_score, report_score;
    float  weighted_score;

    printf("  중간고사, 기말고사, 과제 점수를 입력하세요\n");

    scanf_s("%d %d %d", &middle_score, &final_score, &report_score);

    weighted_score = middle_score * 0.3 + final_score * 0.4 + report_score * 0.3;

    printf("  weighted_score = %.2f\n", weighted_score);
}
