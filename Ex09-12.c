// 文字列を反転する

#include <stdio.h>

//--- 文字列の配列を表示 ---//
void put_strary(const char s[][10], int n)
{
	for (int i = 0; i < n; i++)
		printf("s[%d] = \"%s\"\n", i, s[i]);
}

// 文字列の配列内の各文字列を反転する関数
void rev_strings(char s[][10],int n)
{
	for(int k = 0; k < n; k++){
		int i = 0;
		while (s[k][i]) i++;
		for (int j = 0; 2*j < i - 1; j++) {
			char tmp = s[k][j];
			s[k][j] = s[k][i-1-j];
			s[k][i-1-j] = tmp;
		}
	}
}

int main(void)
{
	char str[][10] = {"SEC","ABC"};

	rev_strings(str,2);
	put_strary(str,2);
	putchar('\n');

	return 0;
}
