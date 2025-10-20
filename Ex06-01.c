// 2つの整数の小さいほうの値を返す

#include <stdio.h>

int min2(int a, int b) {
	return a < b ? a : b;
}

int main(void)
{
	int a,b;
	printf("二つの整数を入力せよ。\n");
	printf("整数a：");
	scanf("%d",&a);
	printf("整数b：");
	scanf("%d",&b);
	printf("%dと%dの小さいほうの値は%dです。\n",a,b,min2(a,b));
}
