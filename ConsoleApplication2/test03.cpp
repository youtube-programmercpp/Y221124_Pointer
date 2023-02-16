#include <stdio.h>
int main()
{
	int   a = 12345;//Windows では 4 バイト
	float b = 6.78f;//Windows では 4 バイト
	char  c[4] = { 'A', 'B', 'C'};//C言語、C++ で 4 バイト
	//メモリの中では皆同じ
	printf("%d\n", a);//「12345」と出力される
	printf("%f\n", b);//「6.780000」と出力される
	printf("%s\n", c);// 「ABC」と出力される
}
