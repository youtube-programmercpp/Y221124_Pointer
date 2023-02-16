struct A {
	int   a   ;//‚±‚±‚Í a ê—p
	float b   ;//‚±‚±‚Í b ê—p
	char  c[4];//‚±‚±‚Í c ê—p
};
#include <stdio.h>
#include <string.h>
int main()
{
	struct A x;//©“®•Ï”
	x.a = 10;
	x.b = 1.234f;
	char d[] = {'A', 'B', 'C', '\0'};
	memcpy(x.c, d, sizeof d);
	printf("%d\n", x.a);
	printf("%f\n", x.b);
	printf("%s\n", x.c);
}
