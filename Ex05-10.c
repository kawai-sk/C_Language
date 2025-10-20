// 行列の積

#include <stdio.h>

int main(void)
{
	//int a[4][3] = {{0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}};
	//int b[3][4] = {{0,0,0,0}, {0,0,0,0}, {0,0,0,0}};
	int a[4][3],b[3][4],c[4][4];

	for (int i = 0; i < 4; i++) {	// 要素に値を読み込む
		for (int j = 0; j < 3; j++) {
			printf("a[%d][%d] : ", i,j);
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < 3; i++) {	// 要素に値を読み込む
		for (int j = 0; j < 4; j++) {
			printf("b[%d][%d] : ", i,j);
			scanf("%d", &b[i][j]);
		}
	}
	
	for (int i = 0; i < 4; i++) {	// 積の表示
		for (int j = 0; j < 4; j++) {
			c[i][j] = 0;
			for (int k = 0; k < 3; k++){
				c[i][j] += a[i][k]*b[k][j];
			}
			printf("c[%d][%d] : %d\n", i, j, c[i][j]);
		}
	}


	return 0;
}
