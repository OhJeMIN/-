#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double score;

	printf("점수를 입력하시오:");
	scanf("%lf", &score);

	if (score >= 70)
	{
		printf("합격입니다. 고생하셨습니다");
	}
	if (score < 70)
	{
		printf("불합격입니다. 수고하셨습니다.");
	}
	return 0;
}