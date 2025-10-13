// 読み込んだ整数を辺の長さとする正方形

#include <stdio.h>

int main(void)
{
	int n;
	printf("正方形を作ります。\n");
	printf("何段ですか：");
	scanf("%d",&n);
	for (int i = 1 ; i <= n ; i++) {
		for (int j = 1 ; j <= n ; j++) {
			printf("*");
		}
		printf("\n");
	}
}

