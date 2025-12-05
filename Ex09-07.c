// 文字列を繰り返し表示する

#include <stdio.h>

// 文字列を繰り返し表示する関数
void put_stringn(const char s[], int n)
{
	for (int i = 0; i < n; i++) {
		int j = 0;
		while (s[j]) {
			putchar(s[j++]);
		}
	}
}

int main(void)
{
	char str[10] = "ABC";
	int n = 3;

	put_stringn(str,n);
	putchar('\n');

	return 0;
}
