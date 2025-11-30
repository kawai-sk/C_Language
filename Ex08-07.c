// 階乗を再帰的に求める

#include <stdio.h>

//--- 整数値nの階乗値を返却 ---//
int combination(int n, int r)
{
	if ( r == 0 || r == n ) {
		return 1;
	} else if ( r == 1 ) {
		return n;
	} else {
		return combination(n-1,r-1) + combination(n-1,r);
	}
}

int main(void)
{
	int num,r;

	printf("2つの整数を入力せよ．\n");
	printf("整数n：");
	scanf("%d", &num);
	printf("整数r：");
	scanf("%d", &r);

	printf("%d C %dは%dです。\n", num, r, combination(num,r));

	return 0;
}
