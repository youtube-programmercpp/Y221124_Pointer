#include <stdio.h>
#include <limits.h>
int main()
{
	//big endian
	// 0x80 0x00 0x00 0x00
	// 0x80000000
	// 
	//little endian
	// 0x00 0x00 0x00 0x80 
	// 0x80000000

	printf("%d\n", *(int*)"\0\0\0\x80");

}
