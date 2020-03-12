#include <stdio.h>
#define Total_Bit 32

int main(void)
{
	int num = 13;
	printf("정수 %d의 %d비트의 내부값\n", num, Total_Bit);

	for (int i = Total_Bit - 1; i >= 0; i--)
	{
		printf("%d", num >> i & 1);
	}
	return 0; 
}