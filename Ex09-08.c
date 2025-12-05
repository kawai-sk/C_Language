// 文字列を後ろから表示する

#include <stdio.h>

// 文字列を後ろから表示する関数
void put_stringr(const char s[])
{
	int i = 0;
	while (s[i]) i++;
	for (int j = i; j >= 0; j--) putchar(s[j]);
}

int main(void)
{
	char str[10] = "ABC";

	put_stringr(str);
	putchar('\n');

	return 0;
}
