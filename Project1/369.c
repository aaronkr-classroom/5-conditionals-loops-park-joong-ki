#include <stdio.h>

void check369(int num);

int main(void) {
	int num = 0;
	printf("369게임 환영합니다! 언제까지 합니까? :");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		check369(i);
	}

	getch();

	return 0;
}
//함수 정의 블록
void check369(int num) {
	int contains369 = 0;
	int temp = num;

	//num에 있는 모든 숫자를 확인하기
	while (temp > 0) {
		int digit = temp % 10;
		switch (digit) {
		case 3:
		case 6:
		case 9:
			contains369 = 1;
			break;
		}

		temp /= 10;
	}

	if (contains369) printf("짝!\n");
	else printf("%d\n", num);
}