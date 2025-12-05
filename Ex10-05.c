// 配列の受渡し
// List10-11のソースコードを利用

#include <stdio.h>

//--- 配列vの先頭n個の要素にvalを代入 ---//
void ary_set(int v[], int n, int val)
{
	for (int i = 0; i < n; i++)
		v[i] = val;
}

int main(void)
{
	int a[] = {1, 2, 3, 4, 5};

	ary_set(&a[2], 2, 99);      // a の i = 2 から始めて2個分の要素が99になる

	for (int i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, a[i]);

	return 0;
}
