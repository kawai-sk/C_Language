// 四項間の最大値の実装

#include <stdio.h>
// #define swap(type,a,b) \
// do { \
// 	type tmp = a; \
// 	a = b; \
// 	b = tmp; \
// } while (0)
#define swap(type,a,b) { type tmp = a; a = b; b = tmp; }

int main(void)
{
	int a = 5, b = 2;
	swap(int,a,b);

	printf("%d,%d\n",a,b);
	return 0;
}