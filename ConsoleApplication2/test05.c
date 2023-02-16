//構造体・共用体の違い


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
	printf("%d\n", x.a);//「65」と出力される
	printf("%s\n", x.c);//「A」と出力される
	char d[] = { 0xc3, 0xf5, 0xd8, 0x40 };
	memcpy(x.c, d, 4);
	printf("%f\n", x.b);//「6.780000」と出力される
	
}
