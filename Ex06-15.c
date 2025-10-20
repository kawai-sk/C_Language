// 呼び出された回数を表示する

#include <stdio.h>

void put_count() {
	static int i = 0;
	printf("put_count : %d回目\n",++i);
}

int main(void)
{
	for (int j = 0; j < 10; j++) put_count();
	return 0;
}
