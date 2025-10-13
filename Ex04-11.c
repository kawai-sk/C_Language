// 読み込んだ正の整数を逆から表示

#include <stdio.h>

int main(void)
{
	int no,inv;
	
	printf("正の整数を入力せよ：");
	scanf("%d", &no);

	printf("%d", no);

	inv = 0;

	while (no > 0) {
		inv *= 10;
		inv += no%10;
		no /= 10;
	}

	printf("を逆から読むと%dです。\n",inv);

	return 0;
}
