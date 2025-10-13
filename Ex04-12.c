// 読み込んだ整数の桁数を表示

#include <stdio.h>

int main(void)
{
	int no,cnt;
	
	printf("正の整数を入力せよ：");
	scanf("%d", &no);

	printf("%d", no);

	cnt = 0;

	while (no > 0) {
		no /= 10;
		cnt += 1;
	}

	printf("は%d桁です。\n",cnt);

	return 0;
}
