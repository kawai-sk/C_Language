// 配列の最小値

#include <stdio.h>

int min_of(const int v[], int n) {
	int min = v[0];
	for (int m = 1; m < n; m++) {
		if (v[m] < min) min = v[m];
	}
	return min;
}

int main(void)
{
	int n;
	printf("要素数：");
	scanf("%d",&n);
	int x[n];

	for (int i = 0; i < n; i++) {
		printf("x[%d]:",i);
		scanf("%d",&x[i]);
	}

	printf("最小値は%dです。\n",min_of(x,n));
}
