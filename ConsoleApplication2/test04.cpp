//‚±‚ê‚Í int Œ^‚Å 12345 ‚Æ‚¢‚¤’l‚ð•\‚·
char a[] = { 0x39, 0x30, 0x00, 0x00 };
char b[] = { 0xc3, 0xf5, 0xd8, 0x40 };
char c[] = { 0x41, 0x42, 0x43, 0x00 };
#include <stdio.h>
int main()
{
	printf("a = %d\n", *(int  *)a);
	printf("b = %f\n", *(float*)b);
	printf("c = %s\n",          c);
}
