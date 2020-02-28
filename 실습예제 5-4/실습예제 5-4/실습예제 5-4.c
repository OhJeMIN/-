#include <stdio.h>

int main(void)
{
	int a = 10, b = 5;
	int result;

	result = a++ + --b;
	printf("a=%d , b =%d, result = %d\n", a, b, result);// 10 + 4

	result = ++a + b--;
	printf("a =%d, b =%d, result =%d\n", a, b, result);//12 + 3

	result = a++ + b--;
	printf("a =%d, b =%d, result =%d\n", a, b, result);//13 + 2

	return 0;
}