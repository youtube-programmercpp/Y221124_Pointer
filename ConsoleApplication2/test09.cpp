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
	//�ꎞ�I�u�W�F�N�g
	//C++ �ł� struct �Ƃ����L�[���[�h���������������Ȃ��ėǂ�
	*reinterpret_cast<B*>(x.c) = B {'X', 'Y', 'X' };
	printf("%s\n", x.c);
}
