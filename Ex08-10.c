// 教科書のソースコードList5-12, List8-11を利用
// 数字文字の出現回数

#include <stdio.h>

int main(void)
{
	int ch;
	int cnt[10] = {0};		// 数字文字の出現回数

	while ((ch = getchar()) != EOF)
		if (ch >= '0' && ch <= '9')
			cnt[ch - '0']++;

	puts("\n---分布グラフ---");

	// 最頻値の計算

	int MAX = 0;

	for (int i = 0; i < 10; i++) {
		if (MAX < cnt[i]) MAX = cnt[i];
	}

	for (int j = MAX; j > 0; j--) {
		for (int i = 0; i < 10; i++) {
			if ( j <= cnt[i] ) {printf(" * ");}
			else {printf("   ");}
		}
		printf("\n");
	}

	for (int i = 0; i < 10; i++) {
		printf("---");
	}
	printf("-\n ");

	for (int i = 0; i < 10; i++) {
		printf("%d  ", i);
	}
	printf("\n");

	return 0;
}
