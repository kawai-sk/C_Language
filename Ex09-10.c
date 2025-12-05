// 数字文字を除去する

#include <stdio.h>

//--- 文字列sを表示（改行はしない）---//
void put_string(const char s[])
{
	int i = 0;
	while (s[i])
		putchar(s[i++]);
}

// 数字文字を除去する関数
void del_digit(char s[])
{
	int i = 0, j = 0;

	while (s[i]) {
		if (s[i] < 0 || s[i] > '9') {
			s[j] = s[i];
			j++;
		}
		i++;
	}
	s[j] = '\0';
}

int main(void)
{
	char str[10] = "A2CDE4E";

	del_digit(str);
	put_string(str);
	putchar('\n');

	return 0;
}
