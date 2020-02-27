#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int year = 0;
	printf("올해 년도는:");
	scanf("%d", &year);
	printf("올해 년도는 : %d",year);


	int month, day;
	printf("당신의 생년월일은? :");
	scanf("%d-%d-%d", &year, &month, &day);
	printf("%d-%d-%d", year, month, day);

	return 0;
}