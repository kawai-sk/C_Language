// データ数と要素の値を読み込んで表示

#include <stdio.h>

#define NUMBER	120		// データ数の上限

int main(void)
{
	int num;				// 実際のデータ数
	int items[NUMBER];		// 要素

	printf("データ数：");

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("\a1～%dで入力せよ：", NUMBER);
	} while (num < 1 || num > NUMBER);

	for (int i = 0; i < num; i++) {
		printf("%2d番：", i + 1);
		scanf("%d", &items[i]);
	}

	printf("{");

	for (int i = 0; i < num - 1; i++) {
		printf("%d, ", items[i]);
	}
	printf("%d}\n", items[num-1]);

	return 0;
}
