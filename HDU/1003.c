#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100002
int dp[SIZE];

/* 杭电 1003 动态规划  最大子段和*/
void maxSubSum(int *arr, int len){
    dp[1] = arr[1];
    int i, start=1, end;
    for(i=2; i<len; i++){
        if(dp[i-1] + arr[i] >= arr[i])
            dp[i] = dp[i-1] + arr[i];
        else
            dp[i] = arr[i];
    }
    int max = -1001;
    for(i=1; i<len; i++){
        if(dp[i] > max){
            max = dp[i];
            end = i;
        }
    }

    int sum = 0;
    for(i=end; i>=1; i--){//倒过来找到开始位置
        sum += arr[i];
        if(sum==max) start = i;
    }
    printf("%d %d %d\n", max, start, end);
}

int main(){
    int T, i, j, N;
    int *arr = NULL;
    while(scanf("%d", &T) != EOF){
        for(i=1; i<=T; i++){
            scanf("%d", &N);
            memset(dp, 0, sizeof(dp));
            arr = (int*)malloc(sizeof(int)*(N+1));
            for(j=1; j<=N; j++)
                scanf("%d", &arr[j]);
            printf("Case %d:\n", i);
            maxSubSum(arr, N+1);

            free(arr);
            arr = NULL;
            if(i<T) printf("\n");
        }

    }
    return 0;
}
