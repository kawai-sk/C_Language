// 教科書のソースコードList5-5を利用

// 配列の全要素の並びを反転する

#include <stdio.h>

#define ITEM_NUMBER 6

int main(void)
{
	int x[ITEM_NUMBER];						// int[7]型の配列

	for (int i = 0; i < ITEM_NUMBER; i++) {	// 要素に値を読み込む
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	for (int i = 0; i < ITEM_NUMBER/2; i++) {	// 要素の並びを反転
		int t    = x[i];
		x[i]     = x[ITEM_NUMBER-1 - i];
		x[ITEM_NUMBER-1 - i] = t;
	}

	puts("反転しました。");
	for (int i = 0; i < ITEM_NUMBER; i++)		// 要素の値を表示
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}
