#include <stdio.h>

int main(void)
{
	int i = 1;

loop :
	printf("%3d", i);
	if(++i <= 10)
	goto loop;

	printf("\n프로그램을 종료합니다.");

return 0;
}