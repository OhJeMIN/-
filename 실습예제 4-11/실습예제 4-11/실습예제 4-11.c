#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a;

	printf("원주율을 입력하세요.\n");
	scanf("%lf", &a);
	printf("%lf\n", a);

	char ch1, ch2;
	printf("구분자를 공백으로 두 문자를 입력하세요.\n");
	scanf(" %c %c", &ch1, &ch2);
	printf("ch1 = %c ,ch2 = %c", ch1, ch2);

	return 0;
}