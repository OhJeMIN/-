#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a=0, b=0;
	double result;

	printf("산술연산을 수행할 두 실수를 입력하세요.\n");
	scanf("%lf, %lf", &a, &b);
	result = a + b;
	printf("%8.2f + %8.2f ==> %8.2f\n", a, b, result);

	result = a - b;
	printf("%8.2f - %8.2f ==> %8.2f\n", a, b, result);

	result = a * b;
	printf("%8.2f * %8.2f ==> %8.2f\n", a, b, result);

	result = a / b;
	printf("%8.2f / %8.2f ==> %8.2f\n", a, b, result);

	return 0;

}