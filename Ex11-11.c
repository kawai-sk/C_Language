// 数字文字を除去する

#include <stdio.h>

void put_string(const char *s)
{
	while(*s) putchar(*s++);
	printf("\n");
}

// 数字文字を除去する関数
void del_digit(char *str)
{
	char *s = str;

	while (*str) {
		if (str[0] < '0' || str[0] > '9') {
			s[0] = str[0];
			*s++;
		}
		*str++;
	}
	s[0] = '\0';
}

int main(void)
{
	char str[10] = "A2CDE4E";

	del_digit(str);
	put_string(str);

	return 0;
}
