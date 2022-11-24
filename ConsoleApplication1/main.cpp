#undef main
#include <Windows.h>
extern "C" int test01();
extern "C" int test02();
extern "C" int test03();
extern "C" int test04();
extern "C" int test05();
           int test06();
		   int test07();
int main()
{
	if (const auto lpAddress = VirtualAlloc
	( /*_In_opt_ LPVOID lpAddress       */LPVOID(65536)
	, /*_In_     SIZE_T dwSize          */65536UL
	, /*_In_     DWORD  flAllocationType*/MEM_RESERVE | MEM_COMMIT
	, /*_In_     DWORD  flProtect       */PAGE_READWRITE
	)) {
		test06();
		(void)VirtualFree(lpAddress, 0, MEM_RELEASE);
	}
	return 0;
}
