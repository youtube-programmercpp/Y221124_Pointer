#include <stdio.h>
int main()
{
	int   a = 12345;//Windows �ł� 4 �o�C�g
	float b = 6.78f;//Windows �ł� 4 �o�C�g
	char  c[4] = { 'A', 'B', 'C'};//C����AC++ �� 4 �o�C�g
	//�������̒��ł͊F����
	printf("%d\n", a);//�u12345�v�Əo�͂����
	printf("%f\n", b);//�u6.780000�v�Əo�͂����
	printf("%s\n", c);// �uABC�v�Əo�͂����
}
