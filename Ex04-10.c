// 読み込んだ整数の個数だけ*を縦に表示

#include <stdio.h>

int main(void)
{
	int no;
	
	printf("正の整数：");
	scanf("%d", &no);

	while (no-- > 0) {
		printf("*\n");
	}

	return 0;
}
