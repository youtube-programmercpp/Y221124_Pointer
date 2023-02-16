struct A {
	int   a   ;//ここは a 専用
	float b   ;//ここは b 専用
	char  c[4];//ここは c 専用
};
#include <stdio.h>
int main()
{
	//C言語の文法用語
	//初期化(initialization)：変数の宣言時にデータを与える書き方
	//等号(=) を使っているが、代入(assignment)ではない
	struct A x =
	{ /*int   a   */10
	, /*float b   */1.234f
	, /*char  c[4]*/{ 'A', 'B', 'C', '\0' }
	};
	printf("%d\n", x.a);
	printf("%f\n", x.b);
	printf("%s\n", x.c);
}
