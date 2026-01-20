// 名前と身長と体重を読み込んで書き込む

#include <stdio.h>

int main(void)
{
	FILE *fp;

	if ((fp = fopen("dt_dat", "w")) == NULL)				// オープン
		printf("\aファイルをオープンできません。\n");
	else {
		int    ninzu;			// 人数
		char   name[100];			// 名前
		double height, weight;		// 身長・体重
		printf("人数："); scanf("%d",&ninzu);

		for (int i = 0; i < ninzu; i++) {
			printf("氏名：");  scanf("%s",  name);
			printf("身長：");  scanf("%lf",  &height);
			printf("体重：");  scanf("%lf", &weight);
			fprintf(fp,"%-10s %5.1f %5.1f\n", name, height, weight);
		}
		fclose(fp);											// クローズ
	}

	return 0;
}
