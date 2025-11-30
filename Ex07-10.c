// floatとintのインクリメントを見比べる

#include <stdio.h>

int main(void)
{
	float x = 0.0;
	int i = 0;

	while (i <= 100) {
		printf("x = %f x = %f\n", x, i/100.0);
		x += 0.01; i += 1; 
	}
	
	return 0;
}
