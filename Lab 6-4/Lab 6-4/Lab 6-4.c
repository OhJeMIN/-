#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input;

	enum color { RED,GREEN,BLUE};
	printf("세 정수 RED(0),GREEN(1),BLUE(2)");
	scanf("%d", &input);

	switch (input)
	{
	case RED: // input == RED
		printf("Red");
		break;
	case GREEN:// input == GREEN
		printf("GREEN");
		break;
	case BLUE:// input ==BLUE
		printf("BLUE");
		break;
	default:
		printf("잘못 입력하셨습니다.");
		break;
	}
	return 0;
}