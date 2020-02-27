#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a =0, b=0;

	printf("두 정수를 입력하시오.");
	scanf("%d , %d", &a, &b); // 정수 입력할때 8,-9 처럼 똑같이 입력해야 됨
	printf("두 개의 숫자중 큰 것은? :%d\n", (a > b) ? a : b);
	printf("두 개의 숫자중 작은 것은? :%d\n", (a < b) ? a : b);
	printf("절댓값은? :%d\n", (a > 0) ? a : -a);
	printf("절댓값은? :%d\n", (b > 0) ? b : -b);

	((a % 2 == 0) ? printf("짝수") : printf("홀수"));

	return 0;
}