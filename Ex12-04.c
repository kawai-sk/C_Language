// ５人の学生を（身長の昇順・名前の昇順）でソート
// データはキーボードから読み込む
// List12-7を利用

#include <stdio.h>
#include <string.h>

#define NUMBER		5		// 学生の人数
#define NAME_LEN	64		// 名前の文字数

//=== 学生を表す構造体 ===//
typedef struct {
	char   name[NAME_LEN];	// 名前
	int    height;			// 身長
	double weight;			// 体重
} Student;

// 学生情報の入力
Student scan_Student() {
	Student Stu = {"Hito",170,70};
	printf("name (char)     :");  scanf("%s", Stu.name);
	printf("height (int)    :");  scanf("%d", &Stu.height);
    printf("weight (double) :");  scanf("%lf", &Stu.weight);
	return Stu;
};

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

//--- 学生の配列aの先頭n個の要素を身長の昇順にソート ---//
void sort_by_name(Student a[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j > i; j--) {
			if ( strcmp(a[j - 1].name, a[j].name) > 0) {
				swap_Student(&a[j - 1], &a[j]);
			}
		}
	}
}

int main(void)
{
	Student std[] = { scan_Student(), scan_Student(), scan_Student(), scan_Student(), scan_Student()
		// {"Sato",   178, 61.2},		// 佐藤君
		// {"Sanaka", 175, 62.5},		// 佐中君
		// {"Takao",  173, 86.2},		// 高尾君
		// {"Mike",   165, 72.3},		// Mike君
		// {"Masaki", 179, 77.5},		// 真崎君
	};

	for (int i = 0; i < NUMBER; i++) {
		printf("%-8s %6d%6.1f\n", std[i].name, std[i].height, std[i].weight);
	}
	
	int judge = 0;
	do {
		printf("身長順 (1) or 名前順 (2) :"); scanf("%d", &judge);
	} while ( judge != 1 && judge != 2 );

	if ( judge == 1 ) {
		sort_by_height(std, NUMBER);	// 身長の昇順にソート
		puts("\n身長順にソートしました。");
	} else if ( judge == 2 ) {
		sort_by_name(std, NUMBER);	// 名前の昇順にソート
		puts("\n名前順にソートしました。");
	}

	for (int i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.1f\n", std[i].name, std[i].height, std[i].weight);

	return 0;
}
