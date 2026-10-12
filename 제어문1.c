
#include <stdio.h>

    int main() {
        int score;
        int count = 0;
        int sum = 0;

        while (count < 3) {
            printf("점수 입력: ");
            scanf("%d", &score);

            // -1 입력 시 종료
            if (score == -1) {
                break;
            }

            // 유효한 점수 범위(0~100) 확인
            if (score >= 0 && score <= 100) {
                sum += score;
                count++;
            }
            else {
                printf("잘못된 입력입니다. (0~100 사이 입력)\n");
            }
        }

        // 결과 출력
        if (count == 0) {
            printf("입력된 점수가 없습니다.\n");
        }
        else {
            printf("유효한 점수 개수: %d개, 평균: %.2f\n", count, (double)sum / count);
        }

        return 0;
    }
}
