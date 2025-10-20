// 教科書のソースコードList5-12を利用

// 学生の点数を読み込んで分布を表示（縦方向）

#include <stdio.h>

#define NUMBER	120		// 人数の上限

int main(void)
{
	int num;				// 実際の人数
	int tensu[NUMBER];		// 学生の点数
	int bunpu[11] = {0};	// 点数の分布

	printf("人数を入力せよ：");

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("\a1～%dで入力せよ：", NUMBER);
	} while (num < 1 || num > NUMBER);

	printf("%d人の点数を入力せよ。\n", num);

	for (int i = 0; i < num; i++) {
		printf("%2d番：", i + 1);
		do {
			scanf("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100)
				printf("\a0～100で入力せよ：");
		} while (tensu[i] < 0 || tensu[i] > 100);
		bunpu[tensu[i] / 10]++;
	}

	puts("\n---分布グラフ---");

	// 最頻値の計算

	int MAX = 0;

	for (int i = 0; i <= 10; i++) {
		if (MAX < bunpu[i]) MAX = bunpu[i];
	}

	for (int j = MAX; j > 0; j--) {
		for (int i = 0; i <= 10; i++) {
			if ( j <= bunpu[i] ) {printf(" * ");}
			else {printf("   ");}
		}
		printf("\n");
	}

	for (int i = 0; i <= 10; i++) {
		printf("---");
	}
	printf("-\n ");

	for (int i = 0; i <= 10; i++) {
		printf("%d ", i*10);
	}
	printf("\n");

	return 0;
}
