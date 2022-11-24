class B {
public:
	~B()
	{
	}
	B()
	{
	}
};
int main()
{
	char x[sizeof (B)];
	//new (x) B();
	reinterpret_cast<B*>(x)->~B();
	//B x;
	//x.~B();
	return 0;
}
