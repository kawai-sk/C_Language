// 標準入力の行数を出力

#include <stdio.h>

int main(void)
{
	int ch,cnt = 0;

	while ((ch = getchar()) != EOF) {
		if (ch == '\n') cnt++;
	}
	printf("入力は%d行でした．\n",cnt);
	return 0;
}
