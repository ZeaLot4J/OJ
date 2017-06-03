#include <stdio.h>
#define size 200001
int segTree[size*4];

void createSegTree(int left, int right, int root, int width){
    segTree[root] = width;
    if(left >= right)
        return;
    int mid = (left + right) / 2;
    createSegTree(left, mid, root<<1, width);
    createSegTree(mid+1, right, root<<1|1, width);
}
int query(int left, int right, int root, int width){
    if(left >= right){
        segTree[root] -= width;
        return left;
    }
    int mid = (left + right) / 2;
    int row = segTree[root<<1] >= width ? query(left, mid, root<<1, width) : query(mid+1, right, root<<1|1, width) ;
    segTree[root] = segTree[root<<1] > segTree[root<<1|1] ? segTree[root<<1] : segTree[root<<1|1];
    return row;
}

int main(){
    int h, w, n, aw;
    while(scanf("%d%d%d", &h, &w, &n) != EOF){
        if(h > n) h = n;
        createSegTree(1, h, 1, w);
        while(n--){
            scanf("%d", &aw);
            if(segTree[1] < aw)
                printf("-1\n");
            else
                printf("%d\n", query(1, h, 1, aw));
        }
    }
}