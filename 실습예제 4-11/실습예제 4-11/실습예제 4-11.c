#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a;

	printf("�������� �Է��ϼ���.\n");
	scanf("%lf", &a);
	printf("%lf\n", a);

	char ch1, ch2;
	printf("�����ڸ� �������� �� ���ڸ� �Է��ϼ���.\n");
	scanf(" %c %c", &ch1, &ch2);
	printf("ch1 = %c ,ch2 = %c", ch1, ch2);

	return 0;
}