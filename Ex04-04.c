/* 教科書のソースコードList4-6を利用 */

// 読み込んだ整数値を1までカウントダウン（その２）

#include <stdio.h>

int main(void)
{
	int no;

	printf("正の整数を入力せよ：");
	scanf("%d", &no);

	while (no >= 1) {
		printf("%d ", no--);	// noの値を表示した後にデクリメント
		if (no == 0) printf("\n");				// 改行:表示した数字がある場合
	}
	
	return 0;
}

