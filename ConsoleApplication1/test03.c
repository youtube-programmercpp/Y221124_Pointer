#include <stdio.h>
struct sample {
	int   a;
	short b;
	char  c;
};
int main()
{
	(*(struct sample*)65536).a = 800;
	(*(struct sample*)65536).b = 500;
	(*(struct sample*)65536).c = 100;
	struct sample* p = 65536;
	printf("p->a = %d\n", p->a);
	printf("p->b = %d\n", p->b);
	printf("p->c = %d\n", p->c);

	printf("65536番地にあるint  型データ = %d\n", *(int*)65536);
	printf("65540番地にあるshort型データ = %d\n", *(short*)65540);
	printf("65542番地にあるint  型データ = %d\n", *(int  *)65542);
	return 0;
}
