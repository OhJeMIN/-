#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int year = 0;
	printf("���� �⵵��:");
	scanf("%d", &year);
	printf("���� �⵵�� : %d",year);


	int month, day;
	printf("����� ���������? :");
	scanf("%d-%d-%d", &year, &month, &day);
	printf("%d-%d-%d", year, month, day);

	return 0;
}