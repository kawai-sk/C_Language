// *を表示して5個ごとに改行

#include <stdio.h>

int main(void)
{
	int n;
	
	printf("何個*を表示しますか？：");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("*");
		if ( i%5 == 0 || i == n ) printf("\n");
	}

	return 0;
}
