// strcpy関数の実装例

#include <stdio.h>
#include <string.h>

char *str_copy(char *s1, const char *s2)
{
	char *t = s1;

	while (*s1++ = *s2++)
	;

	return t;
}

char *str_copy_n(char *s1, const char *s2, size_t n)
{
	size_t m = strlen(s2);
	char *t = s1;

	for (size_t i = 0; i < n; i++) {
		if (i < m) {
			*s1++ = *s2++;
		} else {
			*s1++ = '\0';
		}
	}
	return t;
}

int main(void)
{
	char st[128];
	char s1[128],s2[128];
	char *x = "XXXXXXXXX";

	printf("文字列：");
	scanf("%s", st);

	printf("s2=\"%s\"\n",str_copy(s2,st));
	strcpy(s1, x);  str_copy_n(s1, "12345", 3);  printf("s1 = %s\n", s1);

	strcpy(s1, x);  str_copy_n(s1, "12345", 5);  printf("s1 = %s\n", s1);

	strcpy(s1, x);  str_copy_n(s1, "12345", 7);  printf("s1 = %s\n", s1);

	return 0;
}
