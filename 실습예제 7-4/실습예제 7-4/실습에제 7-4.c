#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int count = 1;
	
	while (count <= 3)
	{
		printf("c언어는 재미있다...\n");
		count++;
	}
	printf("제어변수 count => %d", count);

	return 0;
}