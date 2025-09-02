/* 教科書のソースコードList3-16を利用*/

// 読み込んだ二つの整数値の差を求めて表示（条件演算子）

#include <stdio.h>

int main(void)
{
	int n1, n2;

	puts("二つの整数を入力せよ。");
	printf("整数１：");   scanf("%d", &n1);
	printf("整数２：");   scanf("%d", &n2);

	int dif;
	if (n1 > n2) dif = n1 - n2;
	else dif = n2 - n1;

	printf("それらの差は%dです。\n", dif);
	//printf("それらの差は%dです。\n", n1 > n2 ? n1 - n2 : n2 - n1);

	return 0;
}
