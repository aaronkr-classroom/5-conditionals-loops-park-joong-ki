#include <stdio.h>

void check369(int num);

int main(void) {
	int num = 0;
	printf("369���� ȯ���մϴ�! �������� �մϱ�? :");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		check369(i);
	}

	getch();

	return 0;
}
//�Լ� ���� ���
void check369(int num) {
	int contains369 = 0;
	int temp = num;

	//num�� �ִ� ��� ���ڸ� Ȯ���ϱ�
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

	if (contains369) printf("¦!\n");
	else printf("%d\n", num);
}