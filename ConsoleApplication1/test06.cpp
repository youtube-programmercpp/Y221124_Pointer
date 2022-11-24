#include <iostream>
class A {
	int a;
	int b;
public:
	A(int a, int b) noexcept
		: a(a)
		, b(b)
	{
	}
	~A()
	{
		std::cout << __FUNCTION__ "\n";
	}
	void f() const
	{
		std::cout << "a = " << a << ", b = " << b << '\n';
	}
};
int main()
{
	//�R���X�g���N�^���Ăԕ��@�������̂�
	//�d���Ȃ��A�������������ɂ��Ă���
	new ((void*)70000)A{ 10, 20 };
	reinterpret_cast<A*>(70000)->f();
	reinterpret_cast<A*>(70000)->~A();
	return 0;
}
