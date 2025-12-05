// 文字列の中の特定文字の個数を返す

#include <stdio.h>

// 文字列の中の特定文字の個数を返す関数
int str_chnum(const char s[], int c)
{
	int cnt = 0, i = 0;

	while (s[i]) {
		if ( s[i] == c ) {
			cnt++;
		}
		i++;
	}

	return cnt;
}

int main(void)
{
	char str[10] = "char";
	int c = 'p';

	printf("文字列\"%s\"内の文字pの個数は%dです。\n", str, str_chnum(str,c));

	return 0;
}
