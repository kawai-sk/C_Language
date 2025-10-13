// 読み込んだ整数値の全約数を表示

#include <stdio.h>

int main(void)
{
	int n,cnt;

	printf("整数値：");
	scanf("%d", &n);

	cnt = 0;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			printf("%d\n", i);
			cnt += 1;
		}
	}
	printf("約数は%d個です。", cnt);

	return 0;
}

