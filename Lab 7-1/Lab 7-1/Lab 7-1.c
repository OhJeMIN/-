//0 3 6 9 12 15 18 ��� ���α׷�

#include <stdio.h>
#define Max 20

int main(void)
{
	int count = 0;

	while (count < Max)
	{
		printf("%d\t", count);
		count += 3;
	}
	return 0;
}