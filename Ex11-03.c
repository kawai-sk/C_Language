// strlen関数の実装例

#include <stdio.h>
#include <string.h>
#define unsigned size_t

size_t str_length(const char *s)
{
	size_t l = 0;
	while (s[l++]);
	return l - 1;
}

int main(void)
{
	char str[128];

	printf("文字列：");
	scanf("%s", str);

	printf("文字列\"%s\"の長さは%zuです。\n", str, strlen(str));
	printf("文字列\"%s\"の長さは%zuです。\n", str, str_length(str));

	return 0;
}
