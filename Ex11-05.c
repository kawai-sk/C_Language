// strcat関数とstrncat関数の実装例
// List11-11を利用

#include <stdio.h>
#include <string.h>

char *str_cat(char * s1, const char *s2)
{
	size_t p = strlen(s1);
	size_t m = strlen(s2);
	char st[p+m];
	strcpy(st,s1);
	char *t = s1;

	for (size_t i = 0; i < m; i++) st[p+i] = s2[i];

	strcpy(s1,st);

	return t;
}

char *str_cat_n(char *s1, const char *s2, size_t n)
{
	size_t p = strlen(s1);
	size_t m = strlen(s2);
	char st[p+m];
	strcpy(st,s1);
	char *t = s1;

	for (size_t i = 0; i < n; i++) {
		if (i < m) {
			st[p+i] = s2[i];
		} else {
			st[p+i] = '\0';
		}
	}

	strcpy(s1,st);

	return t;
}

int main(void)
{
	char s1[10];
	char *x = "ABC";

	strcpy(s1, x);  str_cat(s1, "DEFG");		   printf("s1 = %s\n", s1);

	strcpy(s1, x);  str_cat_n(s1, "12345", 3);   printf("s1 = %s\n", s1);

	strcpy(s1, x);  str_cat_n(s1, "12345", 5);   printf("s1 = %s\n", s1);

	strcpy(s1, x);  str_cat_n(s1, "12345", 7);   printf("s1 = %s\n", s1);

	return 0;
}
