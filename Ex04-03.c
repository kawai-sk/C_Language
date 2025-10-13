/* 教科書のソースコードList4-5を利用 */

// 読み込んだ整数値を０までカウントダウン（その１）

#include <stdio.h>

int main(void)
{
	int no;

	printf("正の整数を入力せよ：");
	scanf("%d", &no);

	while (no >= 0) {
		printf("%d ", no);
		if (no == 0) {
			printf("\n");	// 改行:表示した数字がある場合
		}
		no--;		// noの値をデクリメント
	}

	return 0;
}

