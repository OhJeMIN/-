#include <stdio.h>

int main(void)
{
	int i = 1;

loop :
	printf("%3d", i);
	if(++i <= 10)
	goto loop;

	printf("\n���α׷��� �����մϴ�.");

return 0;
}