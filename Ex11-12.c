// atoi関数の実装例

#include <stdio.h>

int ato_int(const char *nptr) {
	int n = 0;
	while (*nptr) {
		n = 10*n + nptr[0] - 48;
		*nptr++;
	}
	return n;
}

long ato_long(const char *nptr) {
	long n = 0;
	while (*nptr) {
		n = 10*n + nptr[0] - 48;
		*nptr++;
	}
	return n;
}

long long ato_long2(const char *nptr) {
	long long n = 0;
	while (*nptr) {
		n = 10*n + nptr[0] - 48;
		*nptr++;
	}
	return n;
}

double ato_double(const char *nptr) {
	double n = 0;
	while (*nptr) {
		n = 10*n + nptr[0] - 48;
		*nptr++;
	}
	return n;
}

int main(void)
{
	char str[128];

	printf("文字列を入力せよ：");
	scanf("%s", str);

	printf("整数に変換すると%dです。\n", ato_int(str));

	return 0;
}
