#include <stdio.h>
void a()
{
	int n;
	printf("n �̃A�h���X�� %p �ł��B\n", &n);
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
