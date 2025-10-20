// a = b = 1.5 の代入により，
// 先に int b = 1.5 が処理されて b の値が 1 になり，
// 続いて double a = b が処理されて a の値が 1.00000... になる．

#include <stdio.h>

#define ITEM_NUMBER 6

int main(void)
{
	double a;
	int b;
	a = b = 1.5;

	printf("%f,%d\n", a,b);

	return 0;
}
