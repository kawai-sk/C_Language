// 文字列を反転する

#include <stdio.h>

//--- 文字列sを表示（改行はしない）---//
void put_string(const char s[])
{
	int i = 0;
	while (s[i])
		putchar(s[i++]);
}

// 文字列を反転する関数
void rev_string(char s[])
{
	int i = 0;
	while (s[i]) i++;
	for (int j = 0; 2*j < i - 1; j++) {
		char tmp = s[j];
		s[j] = s[i-1-j];
		s[i-1-j] = tmp;
	}
}

int main(void)
{
	char str[10] = "ABCDE";

	rev_string(str);
	put_string(str);
	putchar('\n');

	return 0;
}
