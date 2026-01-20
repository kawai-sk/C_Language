// 構造体のスキャン

#include <stdio.h>

//=== 構造体 ===//
struct xyz {
	int    x;
	long   y;
	double z;
};

struct xyz scan_xyz() {
	struct xyz xyz0 = {};
	printf("x (int)    :"); scanf("%d", &xyz0.x);
	printf("y (long)   :"); scanf("%ld", &xyz0.y);
    printf("z (double) :"); scanf("%lf", &xyz0.z);
	return xyz0;
};

int main(void)
{
	struct xyz xyz_initial = scan_xyz();

	printf("x (int)    : %d\n",  xyz_initial.x);
	printf("y (long)   : %ld\n", xyz_initial.y);
    printf("z (double) : %lf\n",  xyz_initial.z);

	return 0;
}
