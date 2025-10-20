// 警報を整数回鳴らす

#include <stdio.h>

void alert(int n)
{
	while (n-- > 0) printf("\a");
}

int main(void)
{
	int n;
	printf("整数を入力せよ：\n");
	scanf("%d",&n);
	alert(n);
}
