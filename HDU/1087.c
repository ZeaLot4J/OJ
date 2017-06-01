#include <stdio.h>

int max(int a, int b)
{
    return a>b?a:b;
}
int main()
{
    int n, sum = 0, array[1001], dp[1001], i, j, Max;

    while(scanf("%d", &n) != EOF && n)
    {
        for(i=0; i<n; i++)
            scanf("%d", &array[i]);
        Max = array[0];
        dp[0] = array[0];

        for(i=1; i<n; i++)
        {
            sum = array[i];
            for(j=0; j<i; j++)
            {
                if(array[i] > array[j])
                    sum = max(sum, dp[j]+array[i]);
            }
            dp[i] = sum;
            Max = max(Max, dp[i]);
        }
        printf("%d\n", Max);
    }
    return 0;
}