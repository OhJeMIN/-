#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double BMI;
	double weight=0 , height=0 ;

	
	printf("몸무게와 신장을 입력하시오.");
	scanf("%lf %lf", &weight, &height);
	BMI = weight / ((height / 100) * (height / 100));
	if (BMI < 18.5)
	{
		printf("저체중입니다.");
	}
	else if (BMI >= 18.5 && BMI < 23)
	{
		printf("정상입니다.");
	}
	else if (BMI >= 23 && BMI < 25)
	{
		printf("과체중입니다.");
	}
	else if (BMI >= 25 && BMI < 30)
	{
		printf("비만입니다.");
	}
	else if (BMI >= 30 && BMI < 35)
	{
		printf("고도 비반입니다.");
	}
	else
	{
		printf(" 초고도 비만입니다.");
	}
	return 0;
}
