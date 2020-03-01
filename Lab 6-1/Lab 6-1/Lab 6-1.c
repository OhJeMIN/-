#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double x = 0, y = 0;

	printf("두 실수를 입력 하시오:");
	scanf("%lf %lf", &x, &y);

	if (x > y)
	{
		printf("연산결과 :%.2lf", x / y);
	}
	else if (x < y)
	{
		printf("연산결과 :%.2lf", x + y);
	}
	else
		printf("연산결과 :%.2lf", x * y);

	return 0;
}