// 身長と標準体重の対応表を入力された数ごとに表示

#include <stdio.h>

int main(void)
{
	int first,last,per;
	
	printf("何cmから：");
	scanf("%d", &first);
	printf("何cmまで：");
	scanf("%d", &last);
	printf("何cmごと：");
	scanf("%d", &per);

	for (int i = first; i <= last; i += per) {
		printf("%dcm  %.2fkg\n",i,(i-100)*0.9);
	}

	return 0;
}
