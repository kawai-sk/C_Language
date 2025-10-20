// 3つの整数の最小値を返す

#include <stdio.h>

int min2(int a, int b) {
	return a < b ? a : b;
}

int min3(int a, int b, int c) {
	return min2(a,min2(b,c));
}

int main(void)
{
	int a,b,c;
	printf("三つの整数を入力せよ。\n");
	printf("整数a：");
	scanf("%d",&a);
	printf("整数b：");
	scanf("%d",&b);
	printf("整数c：");
	scanf("%d",&c);
	printf("%dと%dと%dの最小値は%dです。\n",a,b,c,min3(a,b,c));
}
