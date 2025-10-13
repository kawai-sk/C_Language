// 2つの整数間の全整数を表示

#include <stdio.h>

int main(void)
{
	int a,b,tmp;
	int sum = 0;

	puts("二つの整数を入力せよ．");
	printf("整数a：");
	scanf("%d", &a);
	printf("整数b：");
	scanf("%d", &b);

	tmp = a;

	if (a > b) {
		a = b;
		b = tmp;
		tmp = a;
	}

	do {
		sum += tmp;
		tmp++;
	} while ( tmp != b + 1 );

	printf("%d以上%d以下の全整数の和は%dです。\n",a,b,sum);
	
	return 0;
}

