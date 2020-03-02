#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a = 0, b = 0;

	printf("두 실수를 입력하시오 :");
	scanf("%lf %lf", &a, &b); //초록줄은 오류 6031로 없앨 수 있다.

	int exp;
	printf("연산종류 번호 선택 1(+),2(-),3(*),4(/) :");
	scanf("%d", &exp);

	switch (exp)
	{
	case(1):
		
		printf("%lf + %lf = %.2lf", a, b, a + b);
		break;
	case(2):

		printf("%lf - %lf = %.2lf", a, b, a - b);
		break;
	case(3):

		printf("%lf * %lf = %.2lf", a, b, a * b);
		break;
	case(4):

		printf("%lf / %lf = %.2lf", a, b, a / b);
		break;

	default:

		printf("번호를 잘 못 입력하셨습니다.");
		break;

	}
	
	return 0;
}