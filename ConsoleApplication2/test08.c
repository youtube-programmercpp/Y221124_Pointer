struct A {
	int   a   ;//������ a ��p
	float b   ;//������ b ��p
	char  c[4];//������ c ��p
};
struct B {
	char  c[4];
};
#include <stdio.h>
#include <string.h>
int main()
{
	struct A x;//�����ϐ�
	x.a = 10;
	x.b = 1.234f;
	//�L���X�g�����p
	//�z��̑���͕s��
	//�z�񂶂�Ȃ����̂���
	*(int*)x.c = *(int*)"ABC";
	printf("%d\n", x.a);
	printf("%f\n", x.b);
	printf("%s\n", x.c);
	//�������e����(compound literal) C99 �ŗ��p��, C++ �ł͕s��
	*(struct B*)x.c = (struct B) {'X', 'Y', 'X' };
	printf("%s\n", x.c);
}
