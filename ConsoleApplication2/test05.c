//�\���́E���p�̂̈Ⴂ


union Test
{
	int   a   ;
	float b   ;
	char  c[4];
};

#include <stdio.h>
#include <string.h>
int main()
{
	union Test x;
	x.a = 0x00000041;// 0x41, 0x00, 0x00, 0x00
	printf("%d\n", x.a);//�u65�v�Əo�͂����
	printf("%s\n", x.c);//�uA�v�Əo�͂����
	char d[] = { 0xc3, 0xf5, 0xd8, 0x40 };
	memcpy(x.c, d, 4);
	printf("%f\n", x.b);//�u6.780000�v�Əo�͂����
	
}
