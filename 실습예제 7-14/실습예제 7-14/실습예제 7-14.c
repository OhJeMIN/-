#include <stdio.h>

int main(void)
{
	int MAX = 15;
	printf("1���� %d���� ���� �߿��� 3���� ������ �������� �ʴ� ��\n", MAX);
	
	for (int i = 1; i <= MAX ; i++)
	{
		if (i % 3 == 0)
		continue;
		printf("%3d", i);
	}
	return 0;
}