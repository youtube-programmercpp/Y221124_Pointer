struct A {
	int   a   ;//ここは a 専用
	float b   ;//ここは b 専用
	char  c[4];//ここは c 専用
};
#include <stdio.h>
#include <string.h>
int main()
{
	struct A x;//自動変数
	x.a = 10;
	x.b = 1.234f;
	char d[] = {'A', 'B', 'C', '\0'};
	memcpy(x.c, d, sizeof d);
	printf("%d\n", x.a);
	printf("%f\n", x.b);
	printf("%s\n", x.c);
}
