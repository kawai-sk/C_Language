// 階乗を再帰せずに求める

#include <stdio.h>

//--- 整数値nの階乗値を返却 ---//
int factorial(int n)
{
	int f = 1;
	for (int i = 2; i <= n; i++) f *= i;
	return f;
}

int main(void)
{
	int num;

	printf("整数を入力せよ：");
	scanf("%d", &num);

	printf("%dの階乗は%dです。\n", num, factorial(num));

	return 0;
}
