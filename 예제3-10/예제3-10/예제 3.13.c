#include <stdio.h>

int main(void)
{
	enum Day{sun,mon,tue,wed,thu,fri,sat};
    
	printf("�Ͽ��� ���:%d\n", sun);
	printf("�ݿ��� ���:%d\n", fri);

	enum shape{point,shape=3,line,oct=8,hexa,penta=19};
	printf("point :%d\tshape :%d\t hexa : %d\n",point, shape, hexa);

	enum bool{ false,true };
	printf("false : %d\n", false);


    return 0;

	}