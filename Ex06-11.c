// 配列から要素を探索

#include <stdio.h>

int search_idx(const int v[], int idx[], int key, int n)
{
    int i = 0;
    for (int m = 0; m < n; m++) {
        if (v[m] == key) {
            idx[i++] = m;
        }
    }
    return i;
}

int main(void)
{
    int n,k;
    printf("要素数：");
    scanf("%d",&n);
    printf("探索する数：");
    scanf("%d",&k);
    int v[n],idx[n];

    for (int i = 0; i < n; i++) {
        printf("x[%d]:",i);
        scanf("%d",&v[i]);
    }

    int i = search_idx(v,idx,k,n);
    printf("%dの個数：%d\n",k,i);

    for (int j = 0; j < i; j++) {            // 要素の値を表示
        printf("idx[%d] = %d\n", j, idx[j]);
    }

    return 0;
}
