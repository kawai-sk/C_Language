// 教科書のソースコードList5-5を利用

// 配列の各要素を先頭から逆順に1~5で初期化して表示

#include <stdio.h>

int main(void)
{
	int a[5] = {5, 4, 3, 2, 1};		// 初期化

	for (int i = 0; i < 5; i++)		// 要素の値を表示
		printf("a[%d] = %d\n", i, a[i]);

	return 0;
}
