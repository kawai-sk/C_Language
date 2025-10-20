// 行列の積

#include <stdio.h>

int main(void)
{
	int a[6][2];

	for (int i = 0; i < 6; i++) {	// 点数の入力
		for (int j = 0; j < 2; j++) {
			if (j == 0) {
				printf("%d人目の国語：", i+1);
			} else {
				printf("%d人目の数学：", i+1);
			}
			do {
				scanf("%d", &a[i][j]);
				if (a[i][j] < 0 || a[i][j] > 100)
					printf("\a0～100で入力せよ：");
			} while (a[i][j] < 0 || a[i][j] > 100);
		}
	}

	int sum_subject[2] = {0},sum_student[6] = {0};
	
	for (int i = 0; i < 6; i++) {      // 合計の計算
		for (int j = 0; j < 2; j++) {
			sum_subject[j] += a[i][j];
			sum_student[i] += a[i][j];
		}
	}

	printf("国語：合計点%d,平均点%f\n",sum_subject[0],sum_subject[0]/6.0);
	printf("数学：合計点%d,平均点%f\n",sum_subject[1],sum_subject[1]/6.0);

	for (int i = 0; i < 6; i++) {
		printf("%d人目：合計点%d,平均点%.2f\n",i+1,sum_student[i],sum_student[i]/2.0);
	}

	return 0;
}
