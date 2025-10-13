// 読み込んだ整数の数だけ1234567890を繰り返し表示

#include <stdio.h>

int main(void)
{
	int n;
	
	printf("正の整数を入力せよ：");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("%d",i%10);
	}

	if (n > 0) printf("\n");

	return 0;
}
