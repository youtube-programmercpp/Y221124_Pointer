#include <stdio.h>
//�z����w���|�C���^
//�v�f���w���|�C���^
int main()
{
	//&a;//�z����w���|�C���^   int(*)[10] �^
	//&a[0];//�v�f���w���|�C���^ int*�^
	//a;//�v�f���w���|�C���^�i&a[0]�j int* �^
	(*(int(*)[3])65536)[0] = -1;//0xFFFFFFFF
	(*(int(*)[3])65536)[1] = -2;//0xFFFFFFFE
	(*(int(*)[3])65536)[2] = -3;//0xFFFFFFFD
	//�z��̃T�C�Y�����Ӗ�
	return 0;
}
