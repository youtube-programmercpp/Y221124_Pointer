#include <stdio.h>
int main()
{
#define	a	*(char *)65536
#define	b   *(short*)(&a + 1)//�|�C���^�̑����Z�ł̓I�u�W�F�N�g�̃T�C�Y��������
#define	c	*(int  *)(&b + 1)
	a = 1;
	b = 2;
	c = 3;
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
#undef	c	
#undef	b   
#undef	a	
}
