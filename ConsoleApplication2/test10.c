//アドレスとポインタ
//アドレスは、そこに何が入っているか関係ない
//ポインタは、そこに何が入っているか関係ある
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
	//char ch = *p;//p はアドレスを保持しているだけ
	char ch = *(char*)p;//こうすると 'A' が得られる
	int n = 12345;
	p = &n;
	//int m = *p;//これは駄目
	int m = *(int*)p;
	p = f;//関数 f のアドレスを p に代入
	//ここで p 経由で f を実行するには？
	(*(void(*)())p)();//これで呼び出せる
	p = g;
	int x = (*(int (*)(int, int))p)(10, 20);
}
