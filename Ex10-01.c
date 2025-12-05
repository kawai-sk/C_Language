// 0以上100以下に調整

#include <stdio.h>

void adjust_point(int *n){
	if (*n < 0) *n = 0;
	if (*n > 100) *n = 100;
}

int main(void)
{
	int n = 132;
	adjust_point(&n);
	printf("%d\n",n);

	return 0;
}
