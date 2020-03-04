#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int ancle;
	printf("각도를 입력하시오:");
	scanf("%d", &ancle);

	if (ancle == 0)
	{
		printf("양의 x축");
	}
	else if (ancle > 0 && ancle < 90)
	{
		printf("1사분면입니다.");
	}
	else if (ancle == 90)
	{
		printf(" 양의 Y축입니다.");
	}
	else if (ancle > 90 && ancle < 180)
	{
		printf("2사분면입니다.");
	}
	else if (ancle == 180)
	{
		printf("움의 x축");
	}
	else if (ancle > 180 && ancle < 270)
	{
		printf("3사분면입니다.");
	}
	else if (ancle == 270)
	{
		printf("음의 Y축");
	}
	else if (ancle > 270 && ancle < 360)
	{
		printf("4사분면입니다.");
	}
	else
	{
		printf("각도를 잘못 입력하셨습니다");
	}
	return 0;
}