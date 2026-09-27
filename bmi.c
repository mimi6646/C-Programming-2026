#include <stdio.h>

int main()
{
    float  height, weight;
    float  bmi_score;

    printf("  키(m)와 몸무게(kg)를 실수로 입력하세요.\n");

    scanf_s("%f %f", &height, &weight);

    bmi_score = weight / (height * height);

    printf("  bmi = %.2f\n", bmi_score);
}