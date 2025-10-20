// 整数の3乗値を返す

#include <stdio.h>

int cube(int x) {
	return x*x*x;
}

int main(void)
{
	int x;
	printf("整数を入力せよ：\n");
	scanf("%d",&x);
	printf("%dの3乗値は%dです。\n",x,cube(x));
}
