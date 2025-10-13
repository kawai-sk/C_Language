// 左下が直角の直角二等辺三角形を表示

#include <stdio.h>

int main(void)
{
	int len;

	puts("左上直角二等辺三角形を表示します。");
	printf("短辺：");
	scanf("%d", &len);

	for (int i = 1; i <= len; i++) {	// i行（i = 1, 2, … , len）
		for (int j = 1; j <= len+1-i; j++)	// 各行にlen+1-i個の'*'を表示
			putchar('*');
		putchar('\n');					// 改行
	}

	return 0;
}
