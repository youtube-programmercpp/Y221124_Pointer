//�A�h���X�ƃ|�C���^
//�A�h���X�́A�����ɉ��������Ă��邩�֌W�Ȃ�
//�|�C���^�́A�����ɉ��������Ă��邩�֌W����
void f()
{
}
int g(int a, int b)
{
	return a + b;
}
int main()
{
	void* p = "ABC";
	//char ch = *p;//p �̓A�h���X��ێ����Ă��邾��
	char ch = *(char*)p;//��������� 'A' ��������
	int n = 12345;
	p = &n;
	//int m = *p;//����͑ʖ�
	int m = *(int*)p;
	p = f;//�֐� f �̃A�h���X�� p �ɑ��
	//������ p �o�R�� f �����s����ɂ́H
	(*(void(*)())p)();//����ŌĂяo����
	p = g;
	int x = (*(int (*)(int, int))p)(10, 20);
}
