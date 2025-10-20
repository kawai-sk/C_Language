// 教科書のソースコードList5-15を利用
// ４人の学生の３科目のテスト２回分の合計を求めて表示
// 2回分の点数を3次元配列tensuに格納

#include <stdio.h>

int main(void)
{
	int tensu[2][4][3] = { {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}}, {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35} } };
	int sum[4][3];			// 合計

	// ２回分の点数の合計を求める
	for (int i = 0; i < 4; i++) {							// ４人分の
		for (int j = 0; j < 3; j++) {						// ３科目の
			sum[i][j] = 0;
			for (int k = 0; k < 2; k++) {                   // ２回分の
				sum[i][j] += tensu[k][i][j];                //　点数を加算
			}
		}
	}

	for (int k = 0; k < 2; k++) {
		// k回目の点数を表示
		printf("%d回目の点数\n", k + 1);
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 3; j++)
				printf("%4d", tensu[k][i][j]);
			putchar('\n');
		}
	}

	// 合計点を表示
	puts("合計点");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++)
			printf("%4d", sum[i][j]);
		putchar('\n');
	}

	return 0;
}
