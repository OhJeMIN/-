#include <stdio.h>

int main(void)
{
	char a = "\$"; //그냥 a를 초기화 한듯 ㅇㅅㅇ
	
	printf("문자하나 입력:");
	a = getchar();
	putchar(a); putchar('\n');

	return 0;
}