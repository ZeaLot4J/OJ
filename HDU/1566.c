#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100001
int segTree[SIZE<<2];
int ballnoon[SIZE];
/*
杭电1566 涂气球 线段树解
*/
void createSegTree(int left, int right, int root){
    segTree[root] = 0;
    if(left >= right) return;
    int mid = (left + right) >> 1;
    createSegTree(left, mid, root<<1);
    createSegTree(mid+1, right, root<<1|1);
}

//void rangeUpdate(int left, int right, int root, int from, int to){
//    if(from<=left && to>=right){
//        segTree[root] += 1;
//        return;
//    }
//    int mid = (left + right) >> 1;
//    if(to <= mid)
//        rangeUpdate(left, mid, root<<1, from, to);
//    else if(from > mid)
//        rangeUpdate(mid+1, right, root<<1|1, from, to);
//    else{
//        rangeUpdate(left, mid, root<<1, from, mid);
//        rangeUpdate(mid+1, right, root<<1|1, mid+1, to);
//    }
//}
void rangeUpdate(int left, int right, int root, int from, int to){
    if(from<=left && to>=right){
        segTree[root] += 1;
        return;
    }
    int mid = (left + right) >> 1;
    if(from <= mid)
        rangeUpdate(left, mid, root<<1, from, to);
    if(to > mid)
        rangeUpdate(mid+1, right, root<<1|1, from, to);
}

void add(int left, int right, int root){
    int leftChild = root<<1;
    int rightChild = root<<1|1;
    if(left >= right) {
        ballnoon[left] = segTree[root];
        return;
    }
    //此处就是pushDown
    if(segTree[root] != 0){
        segTree[leftChild] += segTree[root];
        segTree[rightChild] += segTree[root];
        segTree[root] = 0;
    }
    int mid = (left + right) >> 1;
    add(left, mid ,leftChild);
    add(mid+1, right, rightChild);
}

int main(){
    int N, i, a, b;
    while(1){
        scanf("%d", &N);
        if(N == 0) break;
        memset(ballnoon, 0, sizeof(int));
        createSegTree(1,N,1);
        for(i=1; i<=N; i++){
            scanf("%d%d", &a, &b);
            rangeUpdate(1,N,1,a,b);
        }
        add(1,N,1);
        for(i=1; i<N; i++)
            printf("%d ", ballnoon[i]);
        printf("%d\n", ballnoon[i]);
    }
    return 0;
}
