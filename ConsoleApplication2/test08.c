struct A {
	int   a   ;//ここは a 専用
	float b   ;//ここは b 専用
	char  c[4];//ここは c 専用
};
struct B {
	char  c[4];
};
#include <stdio.h>
#include <string.h>
int main()
{
	struct A x;//自動変数
	x.a = 10;
	x.b = 1.234f;
	//キャストを悪用
	//配列の代入は不可
	//配列じゃないものを代入
	*(int*)x.c = *(int*)"ABC";
	printf("%d\n", x.a);
	printf("%f\n", x.b);
	printf("%s\n", x.c);
	//複合リテラル(compound literal) C99 で利用可, C++ では不可
	*(struct B*)x.c = (struct B) {'X', 'Y', 'X' };
	printf("%s\n", x.c);
}
