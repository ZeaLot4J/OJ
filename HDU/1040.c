# include <stdio.h>

int main()
{
    int N, n, i, j, t, x, y, a[1001];

    while (scanf("%d", &N)!=EOF)
    {
        for (i=1; i<=N; ++i)
        {
            getchar();
            scanf("%d", &n);
            for (j=1; j<=n; ++j)
            {
                scanf("%d", &a[j]);
            }    
            for (x=1; x<=n-1; ++x)
            {
                for (y=x+1; y<=n; ++y)
                {
                    if (a[x]>a[y])
                    {
                        t = a[x];
                        a[x] = a[y];
                        a[y] = t;
                    }
                }
            }
            printf("%d", a[1]);
            for (j=2; j<=n; ++j)
            {
                printf(" %d", a[j]);
            }
            printf("\n");
        }
    }

            
    return 0;
}