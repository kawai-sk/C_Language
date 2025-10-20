// 

#include <stdio.h>

//--- ４行３列の行列aと3行4列の行列bの積をcに格納する ---//
void mat_mul(const int a[4][3], const int b[3][4], int c[4][4])
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
            c[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
}

//--- p行4列の行列mを表示 ---//
void mat4_print(const int m[][4],int p)
{
	for (int i = 0; i < p; i++) {
		for (int j = 0; j < 4; j++)
			printf("%4d", m[i][j]);
		putchar('\n');
	}
}
//--- p行3列の行列mを表示 ---//
void mat3_print(const int m[][3],int p)
{
	for (int i = 0; i < p; i++) {
		for (int j = 0; j < 3; j++)
			printf("%4d", m[i][j]);
		putchar('\n');
	}
}

int main(void)
{
	int tensu1[4][3] = { {91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34} };
	int tensu2[3][4] = { {97, 67, 82, 73}, {43, 46, 97, 56}, {21, 85, 46, 35} };
	int sum[4][4];			// 合計

	mat_mul(tensu1, tensu2, sum);

	puts("a");          mat3_print(tensu1,4);	  //
	puts("b");          mat4_print(tensu2,3);	  // 
	puts("行列aとbの積"); mat4_print(sum,4);		// 

	return 0;
}
