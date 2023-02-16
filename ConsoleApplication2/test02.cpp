#include <stdio.h>
void a()
{
	int n;
	printf("n のアドレスは %p です。\n", &n);
}
void b()
{
	a();
}
int main()
{
	a();
	b();
}
