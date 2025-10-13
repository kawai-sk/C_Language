// 読み込んだ整数以下の奇数を表示

#include <stdio.h>

int main(void)
{
	int n;
	
	printf("整数値：");
	scanf("%d", &n);

	for (int i = 1; i <= n; i += 2) {
		printf("%d ",i);
	}

	if (n > 0) printf("\n");

	return 0;
}
