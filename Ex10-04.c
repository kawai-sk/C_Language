// 添字の値を代入

#include <stdio.h>

//--- 配列vの先頭n個の要素に添字の値を代入 ---//
void set_idx(int v[], int n)
{
	for (int i = 0; i < n; i++)
		v[i] = i;
}

int main(void)
{
	int a[] = {-1, -2, -3, -4, -5};

	set_idx(a, 5);

	for (int i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, a[i]);

	return 0;
}
