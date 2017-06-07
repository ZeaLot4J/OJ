#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 500001
int barrack[SIZE];
int segTree[SIZE*4];
/* º¼µç1166µÐ±ø²¼ÕóÏß¶ÎÊ÷ */
void pushUp(int root){
    segTree[root] = segTree[root<<1] + segTree[root<<1|1];
}
void createSegTree(int left, int right, int root){
    if(left >= right){
        segTree[root] = barrack[left];
        return;
    }
    int mid = (left + right) / 2;
    createSegTree(left, mid, root<<1);
    createSegTree(mid+1, right, root<<1|1);
    pushUp(root);
}
void addUpdate(int left, int right, int root, int addIndex, int add){
    if(left >= right){
        segTree[root] += add;
        return;
    }
    int mid = (left + right) / 2;
    if(addIndex <= mid)
        addUpdate(left, mid, root<<1, addIndex, add);
    else
        addUpdate(mid+1, right, root<<1|1, addIndex, add);
    pushUp(root);
}
int query(int left, int right, int root, int from, int to){
    if(from <= left && to >= right){
        return segTree[root];
    }
    int mid = (left + right) / 2;
    int sum = 0;
    if(from <= mid)
        sum += query(left, mid, root<<1, from, to);
    if(to >= mid+1)
        sum += query(mid+1, right, root<<1|1, from, to);
    return sum;
}

void printBarrack(){
    int i;
    for(i=1; i<=10; i++){
        printf("%d ", barrack[i]);
    }
    printf("\n");
}
int main(){
    int T, N, i, j, a,b;
    char cmd[6];
    scanf("%d", &T);
    for(i=1; i<=T; i++){
        scanf("%d", &N);
        for(j=1; j<=N; j++)
            scanf("%d", &barrack[j]);
        createSegTree(1, N, 1);
        printf("Case %d:\n", i);
        while(1){
            scanf("%s", cmd);
            if(strcmp(cmd, "End") == 0) break;
            scanf("%d%d", &a, &b);
            if(strcmp(cmd, "Add") == 0){
                barrack[a] += b;
                addUpdate(1, N, 1, a, b);
            }else if(strcmp(cmd, "Sub") == 0){
                barrack[a] -= b;
                addUpdate(1, N, 1, a, 0-b);
            }else if(strcmp(cmd, "Query") == 0){
                printf("%d\n",query(1, N, 1, a, b));
            }
        }
    }
    return 0;
}
