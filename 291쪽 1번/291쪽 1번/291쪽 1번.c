#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int ancle;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &ancle);

	if (ancle == 0)
	{
		printf("���� x��");
	}
	else if (ancle > 0 && ancle < 90)
	{
		printf("1��и��Դϴ�.");
	}
	else if (ancle == 90)
	{
		printf(" ���� Y���Դϴ�.");
	}
	else if (ancle > 90 && ancle < 180)
	{
		printf("2��и��Դϴ�.");
	}
	else if (ancle == 180)
	{
		printf("���� x��");
	}
	else if (ancle > 180 && ancle < 270)
	{
		printf("3��и��Դϴ�.");
	}
	else if (ancle == 270)
	{
		printf("���� Y��");
	}
	else if (ancle > 270 && ancle < 360)
	{
		printf("4��и��Դϴ�.");
	}
	else
	{
		printf("������ �߸� �Է��ϼ̽��ϴ�");
	}
	return 0;
}