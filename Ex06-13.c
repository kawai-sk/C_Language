// List 6-13 のコードを利用

// ４人の学生の３科目のテスト２回分（3次元配列に格納）の合計を求めて表示（関数版）

#include <stdio.h>

//--- ４行３列の行列aとbの和をcに格納する ---//
void mat_add(const int a[2][4][3], int c[4][3])
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			c[i][j] = 0;
			for (int k = 0; k < 2; k++){
				c[i][j] += a[k][i][j];
			}
		}
	}
}

//--- ４行３列の行列mを表示 ---//
void mat_print(const int m[4][3])
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++)
			printf("%4d", m[i][j]);
		putchar('\n');
	}
}

int main(void)
{
	int tensu[2][4][3] = {{ {91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34} }, { {97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35} } };
	int sum[4][3];			// 合計

	mat_add(tensu, sum);				// ２回分の点数の合計を求める

	puts("１回目の点数");  mat_print(tensu[0]);	// １回目の点数を表示
	puts("２回目の点数");  mat_print(tensu[1]);	// ２回目の点数を表示
	puts("合計点");        mat_print(sum);		// 合計点を表示

	return 0;
}
