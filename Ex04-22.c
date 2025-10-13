/* 教科書のソースコードList4-19を利用 */

// 長方形を描画

#include <stdio.h>

int main(void)
{
	int height, width;

	puts("横長の長方形を表示します。");
	printf("一辺（その１）：");   scanf("%d", &height);
	printf("一辺（その２）：");   scanf("%d", &width);

	if (height > width) {
		int tmp = height;
		height = width;
		width = tmp;
	}

	for (int i = 1; i <= height; i++) {		// 長方形はheight行
		for (int j = 1; j <= width; j++)	// 各行にwidth個の'*'を表示
			putchar('*');
		putchar('\n');						// 改行
	}

	return 0;
}