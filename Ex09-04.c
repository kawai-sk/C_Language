// 文字列を空文字列にする

#include <stdio.h>

void null_string(char s[])
{
	s[0] = '\0';
}

int main(void)
{
	char str[128];

	printf("文字列を入力せよ：");
	scanf("%s", str);

	null_string(str);

	printf("文字列\"%s\"の長さは0です。\n", str);

	return 0;
}
