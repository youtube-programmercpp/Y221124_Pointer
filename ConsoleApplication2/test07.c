struct A {
	int   a   ;//������ a ��p
	float b   ;//������ b ��p
	char  c[4];//������ c ��p
};
#include <stdio.h>
int main()
{
	//C����̕��@�p��
	//������(initialization)�F�ϐ��̐錾���Ƀf�[�^��^���鏑����
	//����(=) ���g���Ă��邪�A���(assignment)�ł͂Ȃ�
	struct A x =
	{ /*int   a   */10
	, /*float b   */1.234f
	, /*char  c[4]*/{ 'A', 'B', 'C', '\0' }
	};
	printf("%d\n", x.a);
	printf("%f\n", x.b);
	printf("%s\n", x.c);
}
