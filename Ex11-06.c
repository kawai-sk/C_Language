// strcmp関数の実装例
// List11-12を利用

#include <stdio.h>
#include <string.h>

int str_cmp(const char *s1, const char *s2)
{
	while (1) {
		if ( *s1 == *s2 ) {
			*s1++;
			*s2++;
		} else {
			return ( *s1 > *s2 );
		}
	}

	return 0;
}

int str_cmp_n(const char *s1, const char *s2, size_t n)
{
	for (size_t i = 0; i < n; i++) {
		if ( *s1 == *s2 ) {
			*s1++;
			*s2++;
		} else {
			return ( *s1 > *s2 );
		}
	}

	return 0;
}

int main(void)
{
	char s2[128];

	puts("\"ABCDE\"との比較を行います。");
	puts("\"XXXXX\"で終了します。");

	while (1) {
		printf("\n文字列s2：");
		scanf("%s", s2);

		if (strcmp(s2, "XXXXX") == 0)
			break;
		printf("strcmp( \"ABCDE\", s2)    = %d\n", strcmp( "ABCDE", s2));
		printf("strncmp(\"ABCDE\", s2, 3) = %d\n", strncmp("ABCDE", s2, 3));
	}

	return 0;
}
