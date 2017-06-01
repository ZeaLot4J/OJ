# include<stdio.h>
# include<malloc.h>

int main()
{
    int N, M, * a, i, k, sum;


    while(scanf("%d", &N)!=EOF)
    {
        for(k=0; k<N; k++)
        {
            sum = 0;
            scanf("%d", &M);
            a = (int *)malloc(M * sizeof(int));
            for(i=0; i<M; i++)
            {
                scanf("%d", &a[i]);
                sum += a[i];
            }
            printf("%d\n", sum);
        }
        
    }

    return 0;
}