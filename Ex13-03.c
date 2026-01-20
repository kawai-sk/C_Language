// 名前と身長と体重を読み込んで平均値を求めて表示する
// 個人データを身長順にソートしてから表示
// List13-2を利用

#include <stdio.h>
#include <string.h>

#define NAME_LEN	64		// 名前の文字数
#define STU_NUM	    128		// 名前の文字数

//=== 学生を表す構造体 ===//
typedef struct {
	char   name[NAME_LEN];	// 名前
	double height;			// 身長
	double weight;			// 体重
} Student;

// 構造体に入力
Student std_of(char *name, double height, double weight){
	Student temp = {"John",0,0};
	strcpy(temp.name, name);
	temp.height = height;
	temp.weight = weight;
	return temp;
}

//--- xおよびyが指す学生を交換 ---//
void swap_Student(Student *x, Student *y)
{
	Student temp = *x;
	*x = *y;
	*y = temp;
}

//--- 学生の配列aの先頭n個の要素を身長の昇順にソート ---//
void sort_by_height(Student a[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j > i; j--)
			if (a[j - 1].height > a[j].height)
				swap_Student(&a[j - 1], &a[j]);
	}
}

int main(void)
{
	FILE *fp;
	Student std[STU_NUM] = {};

	if ((fp = fopen("hw.txt", "r")) == NULL)				// オープン
		printf("\aファイルをオープンできません。\n");
	else {
		int    ninzu = 0;			// 人数
		char   name[NAME_LEN];			// 名前
		double height, weight;		// 身長・体重
		double hsum = 0.0;			// 身長の合計
		double wsum = 0.0;			// 体重の合計

		while (fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3) {
			Student Stu = std_of(name,height,weight);
			std[ninzu] = Stu;
			ninzu++;
			hsum += height;
			wsum += weight;
		}
		sort_by_height(std, ninzu);
		for (int i = 0; i < ninzu; i++) {printf("%-8s %6.1f %6.1f\n", std[i].name, std[i].height, std[i].weight); }
		printf("----------------------\n");
		printf("平均       %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
		fclose(fp);											// クローズ
	}

	return 0;
}
