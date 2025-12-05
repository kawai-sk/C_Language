// 文字列の配列を表示（関数版）
// List9-12のソースコードを利用

#include <stdio.h>
#define num 10
#define NUMBER 128

//--- 文字列の配列を表示 ---//
void put_strary(const char s[][NUMBER], int n)
{
	for (int i = 0; i < n; i++)
		printf("s[%d] = \"%s\"\n", i, s[i]);
}

int receive_string(char cs[][NUMBER], int n)
{
	int i = 0;
	while(i < n){
		printf("s[%d] : ", i);
		scanf("%s", cs[i]);
		if (cs[i][0] == '$' ) {
			if (cs[i][1] == '$') {
				if (cs[i][2] == '$') {
					if (cs[i][3] == '$') {
						if (cs[i][4] == '$') {
							if (cs[i][5] == '\0') {
								cs[i][0] = '\0';
								break;
							}
						}
					}
				}
			}
		}
		i++;
	}

	return i;
}

int main(void)
{
	char cs[][NUMBER] = {};
	int n = receive_string(cs,num);

	put_strary(cs, n);

	return 0;
}
