// 1から整数までの全整数の和を返す

#include <stdio.h>


// List 6-3 の関数：2乗値を返す
int sumup(int n)
{
	int sum = 0;
	do {
		sum += n;
	} while (n-- > 0);
	return sum;
}

int main(void)
{
	int n;
	printf("整数を入力せよ：\n");
	scanf("%d",&n);
	printf("1から%dまでの全整数の和は%dです。\n",n,sumup(n));
}
