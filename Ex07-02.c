// 符号なし整数の左右シフト

#include <stdio.h>

int main(void)
{
	unsigned x;
	int n;

	printf("非負の整数：");         scanf("%u", &x);
	printf("シフトするビット数：");  scanf("%d", &n);

	int power = 1;
	for (int i = 0; i < n ; i++) power *= 2;

	putchar('\n');
	printf("左に%dビットシフトした結果：%d\n", n, (x << n));
	printf("元の整数を2^%d倍した結果：%d\n", n, x*power);
	printf("右に%dビットシフトした結果：%d\n", n, (x >> n));
	printf("元の整数を2^%dで割った結果：%d\n", n, x/power);

	return 0;
}
