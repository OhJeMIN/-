#include <stdio.h>
#define Total_Bit 32

int main(void)
{
	int num = 13;
	printf("���� %d�� %d��Ʈ�� ���ΰ�\n", num, Total_Bit);

	for (int i = Total_Bit - 1; i >= 0; i--)
	{
		printf("%d", num >> i & 1);
	}
	return 0; 
}