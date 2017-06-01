# include<stdio.h>
# include<malloc.h>

int main()
{
    int N, M, i, j, sum, * a;

    while(scanf("%d", &N)!=EOF)
    {
        for(i=0; i<N; i++)
        {
            sum = 0;
            scanf("%d", &M);
            a = (int *)malloc(N * sizeof(int));
            for(j=0; j<M; j++)
            {
                scanf("%d", &a[j]);
                sum += a[j];
            }
            if(i!=N-1)
                printf("%d\n\n", sum);
            else
                printf("%d\n", sum);
        }
    }
    return 0;
}