struct A {
	int   a   ;//������ a ��p
	float b   ;//������ b ��p
	char  c[4];//������ c ��p
};
#include <stdio.h>
#include <string.h>
int main()
{
	struct A x;//�����ϐ�
	x.a = 10;
	x.b = 1.234f;
	char d[] = {'A', 'B', 'C', '\0'};
	memcpy(x.c, d, sizeof d);
	printf("%d\n", x.a);
	printf("%f\n", x.b);
	printf("%s\n", x.c);
}
