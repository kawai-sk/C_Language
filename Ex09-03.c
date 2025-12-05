// 文字列の配列を読み込んで表示
// List09-07のソースコードを利用

#include <stdio.h>
#define NUMBER 128

int main(void)
{
	char s[NUMBER][128];
	int L = 0;

	for (int i = 0; i < NUMBER; i++) {
		printf("s[%d] : ", i);
		scanf("%s", s[i]);
		if (s[i][0] == '$' ) {
			if (s[i][1] == '$') {
				if (s[i][2] == '$') {
					if (s[i][3] == '$') {
						if (s[i][4] == '$') {
							if (s[i][5] == '\0') {
								s[i][0] = '\0';
								L = i;
								break;
							}
						}
					}
				}
			}
		}
	}

	for (int i = 0; i < L; i++)
		printf("s[%d] = \"%s\"\n", i, s[i]);

	return 0;
}
