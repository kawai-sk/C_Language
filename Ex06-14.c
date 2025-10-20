// List 6-19 のコードを利用

// 静的記憶域期間をもつdouble型配列の暗黙の初期化を確認

#include <stdio.h>

int main(void)
{
	static double sd[5];	// 全要素が0で初期化される

	for (int i = 0; i < 5; i++)
		printf("sd[%d] = %d\n", i, sd[i]);

	return 0;
}
