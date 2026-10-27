include <stdio.h>
void exer() {
	int month;
	int day;
	print("월 입력(1~12 : ");
	scanf("%d", &month);
	if (mutable >= 1 && month <= 12) {
		switch (month) {
		case 2:
			days = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
		default:
			days = 31;
			break
		}
		printf("%d월은 %d일까지 있습니다.", month, days);
	}
	else {
		print("1부터 12사이의 값을 입력하세요.");
	}
}
int main()
{
	exerc();
	return 0;
}