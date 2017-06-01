#include <stdio.h>
int integerDivision2(int ival){
    //下标从1开始
    int dp[121][121], i, j;
    memset(dp, 0, sizeof(int));
    for(i=1; i<ival+1; i++){
        dp[1][i] = 1;
        dp[i][1] = 1;
    }

    for(i=2; i<ival+1; i++){
        for(j=2; j<ival+1; j++){
            if(i <= j)  dp[i][j] = 1 + dp[i][i-1];
            if(j > 1 && j < i)  dp[i][j] = dp[i-j][j] + dp[i][j-1];
        }
    }
    return dp[ival][ival];
}
int main(){
    int n;
    while(scanf("%d", &n) != EOF)
        printf("%d\n",integerDivision2(n));
    return 0;
}