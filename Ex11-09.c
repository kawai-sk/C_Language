// 文字列を表示する関数の実装例

#include <stdio.h>
#include <string.h>

char *str_chr(const char *s, int c)
{
	while (*s) {
		if (*s == c) return (char *)s;
		*s++;
	}
	
	return NULL;
}

int main(void)
{
	char s[128];
	printf("文字列s：");
	scanf("%s", s);
	int c = '1';

	printf("文字列%sの中の1の位置は%s\n",s,str_chr(s,c));

	return 1;
}
