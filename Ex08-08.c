// 最大公約数

#include <stdio.h>

//--- 整数値nの階乗値を返却 ---//
int gcd(int x, int y)
{
	if ( x < y ) {
		return gcd(y,x);
	} else {
		int r = (x % y);
		if ( r == 0 ) { return y; }
		else {return gcd( y, x - (x/y)*y ); }
	}
}

int main(void)
{
	int x,y;

	printf("2つの整数を入力せよ．\n");
	printf("整数x：");
	scanf("%d", &x);
	printf("整数r：");
	scanf("%d", &y);

	printf("%dと%dの最大公約数は%dです。\n", x, y, gcd(x,y));

	return 0;
}
