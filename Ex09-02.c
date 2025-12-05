// 文字列を空文字列にする

#include <stdio.h>

int main(void)
{
	char s[] = "ABC";
	s[0] = '\0';      // 以降の文字列は無視される

	printf("文字列sは\"%s\"です。\n", s);	

	return 0;
}
