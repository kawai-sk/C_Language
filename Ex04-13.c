// 1から読み込んだ正の整数までの総和を表示

#include <stdio.h>

int main(void)
{
	int n,sum;
	
	printf("nの値：");
	scanf("%d", &n);

	sum = 0;

	for (int i = 1; i <= n; i++) {
		sum += i;
	}

	printf("1から%dまでの総和は%dです。\n",n,sum);

	return 0;
}
