// 文字列を表示する関数の実装例

#include <stdio.h>

void put_string(const char *s)
{
	while(*s) putchar(*s++);
	printf("\n");
}

int main(void)
{
	char s[128];
	printf("文字列s：");
	scanf("%s", s);

	put_string(s);

	return 0;
}
