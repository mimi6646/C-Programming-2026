#include <stdio.h>

int main() {
    int n;

    printf("n 입력 (1~9): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n"); 
    }

    return 0;
}
