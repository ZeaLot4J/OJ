#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 5001
int segTree[N<<2];//此线段树用于统计0~n-1中出现的数字种类数
int ival[N];

/*
杭电HDU OJ1394求最小逆序数，线段树版
题目说是一个0~n-1的排列数，所以比ival小的个数肯定为ival，比ival大的个数肯定为n-1-ival
 */
/*
                     0
               0           0
       0               0       0
   0       0       0       0       0
 0   0   0   0   0   0   0   0   0   0
[0] [1] [2] [3] [4] [5] [6] [7] [8] [9]
例如统计[5-]，其实就是当插入5之后的逆序数之和

1
1 3 6 9 0 8 5 7 4 2
*/
void pushUp(int root){
    segTree[root] = segTree[root<<1] + segTree[root<<1|1];
}
void createSegTree(int left, int right, int root){
    segTree[root] = 0;
    if(left >= right)
        return;
    int mid = (left + right) / 2;
    createSegTree(left, mid, root<<1);
    createSegTree(mid+1, right, root<<1|1);
}
void update(int left, int right, int root, int i){
    if(left >= right){
        segTree[root]++;
        return;
    }
    int mid = (left + right) / 2;
    if(i <= mid)
        update(left, mid, root<<1, i);
    else
        update(mid+1, right, root<<1|1, i);
    pushUp(root);
}
int query(int left, int right, int root, int from, int to){
    if(from <= left && to >= right)
        return segTree[root];
    int mid = (left + right) / 2;
    int sum = 0;
    if(from <= mid)
        sum += query(left, mid, root<<1, from, to);
    if(to >= mid)
        sum += query(mid+1, right, root<<1|1, from, to);
    return sum;
}

int main(){
    int n, i, j, num, min;
    while(scanf("%d", &n) != EOF){
        createSegTree(0, n-1, 1);
        num = 0;

        //这一步就是统计初始序列的逆序数之和，如果用两层循环，则时间复杂度为n^2
        //使用线段树只要nlogn
        for(i=0; i<n; i++){
            scanf("%d", &ival[i]);
            num += query(0, n-1, 1, ival[i], n-1);
            update(0, n-1, 1, ival[i]);
        }
        min = num;
        //题目说是一个0~n-1的排列数，所以比ival小的个数肯定为ival，比ival大的个数肯定为n-1-ival
        for(i=0; i<n-1; i++){
            num = num - ival[i] + n - 1 - ival[i];
            if(min > num) min = num;
        }
        printf("%d\n", min);
    }

    return 0;
}
