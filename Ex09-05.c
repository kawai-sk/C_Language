// 文字列の中の添字を返す

#include <stdio.h>

// 文字列の添字を返す
int str_char(const char s[], int c)
{
	int integer = -1, i = 0;

	while (s[i]) {
		if ( s[i] == c ) {
			integer = i;
			break;
		}
		i++;
	}

	return integer;
}

int main(void)
{
	char str[10] = "char";
	int c = 'b';

	printf("文字列\"%s\"内の文字aの位置は%dです。\n", str, str_char(str,c));

	return 0;
}
