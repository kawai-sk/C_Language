// ピラミッド

#include <stdio.h>

int main(void)
{
	int n;
	printf("ピラミッドを作ります。\n");
	printf("何段ですか：");
	scanf("%d",&n);

	for (int i = 1 ; i <= n ; i++) {
		for (int j = 1 ; j <= 2*n - 1 ; j++) {
			if (j >= n + 1 - i && j <= n + i - 1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}

