#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double x = 0, y = 0;

	printf("�� �Ǽ��� �Է� �Ͻÿ�:");
	scanf("%lf %lf", &x, &y);

	if (x > y)
	{
		printf("������ :%.2lf", x / y);
	}
	else if (x < y)
	{
		printf("������ :%.2lf", x + y);
	}
	else
		printf("������ :%.2lf", x * y);

	return 0;
}