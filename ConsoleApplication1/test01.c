#include <stdio.h>
#include <stdint.h>
int main()
{
	//�S�o�C�g�Achar �^�f�[�^�S�A�S����
	*(char*)65536 = 'A'; //65536 �Ԓn�� 'A' �Ƃ��������R�[�h����������
	*(char*)65537 = 'B';
	*(char*)65538 = 'C';
	*(char*)65539 = '\0'; // Null ���� (�[��) '0'
	printf("%s\n", 65536);
	return 0;
}
