#include <stdio.h>

int main() {
    int num;
    int prev_num = 0;   
    int consecutive = 0; 
    int total_count = 0; 

    while (1) {
        printf("숫자 입력 (1~9): ");
        scanf("%d", &num);

     
        total_count++;

        if (num == prev_num) {
            consecutive++;
        }
        else {
            prev_num = num;
            consecutive = 1;
        }

        if (consecutive == 3) {
            break;
        }
    }

    printf("숫자 %d가 3번 연속 -> 전체 %d회\n", num, total_count);

    return 0;
}
