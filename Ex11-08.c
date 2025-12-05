// 文字列を表示する関数の実装例

#include <stdio.h>

int str_chnum(const char *s, int c)
{
	int cnt = 0;
	while (*s) {
		if (*s++ == c) {
			cnt += 1;
		}
	}
	
	return cnt;
}

int main(void)
{
	char s[128];
	printf("文字列s：");
	scanf("%s", s);
	int c = '1';

	printf("文字列%sの中の1の個数は%d\n",s,str_chnum(s,c));

	return 0;
}
