// 前回のプログラム実行時の日付と時刻と気分を表示する
// List 13-4を利用

#include <time.h>
#include <stdio.h>
#define HEART_LEN 128

char data_file[] = "datetime.dat";				// ファイル名

//--- 前回の日付・時刻を取得・表示 ---//
void get_data(void)
{
	FILE *fp;

	if ((fp = fopen(data_file, "r")) == NULL)				// オープン
		printf("本プログラムを実行するのは初めてですね。\n");
	else {
		int year, month, day, h, m, s;
		char heart[HEART_LEN];

		fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
		printf("前回は%d年%d月%d日%d時%d分%d秒で、", year, month, day, h, m, s);
		fscanf(fp, "%s", heart);
		printf("気分は%sでした。\n",heart);
		
		fclose(fp);											// クローズ
	}
}

//--- 今回の日付・時刻を書き込む ---//
void put_data(void)
{
	FILE *fp;

	if ((fp = fopen(data_file, "w")) == NULL)				// オープン
		printf("\aファイルをオープンできません。\n");
	else {
		time_t current = time(NULL);			  // 現在の暦時刻
		struct tm *timer = localtime(&current);	  // 要素別の時刻（地方時）
		char heart[HEART_LEN];

		fprintf(fp, "%d %d %d %d %d %d\n",
				timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
				timer->tm_hour,		   timer->tm_min,	  timer->tm_sec);
		printf("現在の気分は："); scanf("%s", heart);
		fprintf(fp, "%s\n", heart);
		fclose(fp);											// クローズ
	}
}

int main(void)
{
	get_data();			// 前回の日付・時刻を取得・表示

	put_data();			// 今回の日付・時刻を書き込む

	return 0;
}
