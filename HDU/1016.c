#include <stdio.h>
#define N 40
int prime[N+1], pnum, flag[N+1];
int a[20], book[20];

void primechart()
{
    int i, j;
    for(i=0; i<=N; i++)
        flag[i] = 1;
    for(i=2; i<=N; i++)
    {
        if(flag[i]==1)
            prime[pnum++] = i;
        for(j=0; j<pnum&&prime[j]*i<=N; j++)
        {
            flag[prime[j]*i] = 0;
            if(i%prime[j]==0)
                break;
        }
    }
}
void print(int n)
{
    int i;
    printf("1");
    for(i=2; i<=n; i++)
        printf(" %d", a[i]);
    printf("\n");
}
void search(int n, int circle)
{
    int i;
    if(circle==n+1)
    {
        if(flag[a[circle-1]+a[1]])
        {
            print(n);
            return;
        }
        else
            return;
    }
    for(i=2; i<=n; i++)
    {
        if(flag[i+a[circle-1]] && !book[i])
        {
            book[i] = 1;
            a[circle] = i;
            search(n, circle+1);
            book[i] = 0;
        }
    }
    return;
}
int main()
{    
    int n, i = 1, j;
    a[1] = 1;
    book[1] = 1;
    primechart();
    while(scanf("%d", &n)!=EOF)
    {
        for(j=2; j<=n; j++)
        {
            book[j] = 0;
        }
        printf("Case %d:\n", i);
        search(n,2);
        i++;
        printf("\n");
    }
    return 0;
}