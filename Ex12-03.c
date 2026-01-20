// 構造体のスキャン

#include <stdio.h>

#define NAME_LEN	64		// 名前の文字数

//=== 学生を表す構造体 ===//
typedef struct {
	char   name[NAME_LEN];	// 名前
	int    height;			// 身長
	double weight;			// 体重
} Student;

Student scan_Student() {
	Student Stu = {"Hito",170,70};
	printf("name (char)     :");  scanf("%s", Stu.name);
	printf("height (int)    :");  scanf("%d", &Stu.height);
    printf("weight (double) :");  scanf("%lf", &Stu.weight);
	return Stu;
};

int main(void)
{
	Student Stu = scan_Student();

	printf("name (char)     : %s\n",  Stu.name);
	printf("height (int)    : %d\n",  Stu.height);
    printf("weight (double) : %lf\n",  Stu.weight);

	return 0;
}
