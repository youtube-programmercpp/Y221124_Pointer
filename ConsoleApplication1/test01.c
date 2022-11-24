#include <stdio.h>
#include <stdint.h>
int main()
{
	//４バイト、char 型データ４個、４文字
	*(char*)65536 = 'A'; //65536 番地に 'A' という文字コードを書き込む
	*(char*)65537 = 'B';
	*(char*)65538 = 'C';
	*(char*)65539 = '\0'; // Null 文字 (ゼロ) '0'
	printf("%s\n", 65536);
	return 0;
}
