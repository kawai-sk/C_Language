// 読み込んだ正の整数値まで偶数をカウントアップ

#include <stdio.h>

int main(void)
{
	int no;

	printf("正の整数を入力せよ：");
	scanf("%d", &no);

	int i = 2;
	while (i <= no) {
		printf("%d ", i++);		// iの値を表示した後にインクリメント
		i ++;
		if (i > no) printf("\n");				// 改行
	}

	return 0;
}