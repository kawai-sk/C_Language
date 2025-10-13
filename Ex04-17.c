// 1から読み込んだ整数までの2乗値を表示

#include <stdio.h>

int main(void)
{
	int n;
	
	printf("nの値：");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("%dの２乗は%d\n",i,i*i);
	}

	return 0;
}
