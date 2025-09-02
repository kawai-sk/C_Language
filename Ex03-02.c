/* 教科書のソースコードList3-9を利用
List3-9の最後のelseをelse if文に変更した。
変更後のifが成立しない(noが非負の)場合はそもそも変更後のif文まで辿り着かないため問題なく実行できる。 */

// 読み込んだ整数値の符号を判定

#include <stdio.h>

int main(void)
{
	int no;

	printf("整数を入力せよ：");
	scanf("%d", &no);

	if (no == 0)
		puts("その数は０です。");
	else if (no > 0)
		puts("その数は正です。");
	else if (no < 0)
		puts("その数は負です。");

	return 0;
}
