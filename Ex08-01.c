// floatとintのインクリメントを見比べる

#include <stdio.h>
#define diff(x,y) ((x)-(y))

int main(void)
{
	int x=1,y=2;
	float a = 1.0,b=2.0;

	printf("%d\n",diff(x,y));
	printf("%f\n",diff(a,b));

	return 0;
}