// 整数の4乗値を返す

#include <stdio.h>


// List 6-3 の関数：2乗値を返す
int sqr(int n)
{
	return n * n;
}

int pow4(int x) {
	return sqr(sqr(x));
}

int main(void)
{
	int x;
	printf("整数を入力せよ：\n");
	scanf("%d",&x);
	printf("%dの4乗値は%dです。\n",x,pow4(x));
}
