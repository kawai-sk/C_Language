// オーバーフローしないことの確認

#include <stdio.h>

int main(void)
{
	float x;
	double y;
	long double z;

	printf("数値を入力して：");
	scanf("%f", &x);
	printf("入力された値は%f\n",x);

	printf("数値を入力して：");
	scanf("%lf", &y);
	printf("入力された値は%lf\n",y);

	printf("数値を入力して：");
	scanf("%Lf", &z);
	printf("入力された値は%Lf\n",z);

	return 0;
}
