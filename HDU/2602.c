#include<stdio.h>
#include<string.h>

#define N 1010
#define max(a,b) (a)>(b)?(a):(b)

int dp[N][N];
int n, m;
int w[N], c[N];
void bag01(){
    int dp[N];
    int t;
    scanf("%d", &t);
    while (t--){
        memset(dp, 0, sizeof(dp));
        memset(w, 0, sizeof(w));
        memset(c, 0, sizeof(c));
        scanf("%d%d", &n, &m);
        int i,j;
        for (i = 1; i <= n; i++)
            scanf("%d", &w[i]);
        for (i = 1; i <= n; i++)
            scanf("%d", &c[i]);

        for (i = 1; i <= n; i++){
            for (j = m; j >= 0; j--){
                if(j-c[i] >= 0)
                    dp[j] = max(dp[j], dp[j-c[i]]+w[i]);
            }
        }

        printf("%d\n", dp[m]);
    }
}


int main()
{
    bag01();
    return 0;
}