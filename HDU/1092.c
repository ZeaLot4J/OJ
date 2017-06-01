# include<stdio.h>
# include<malloc.h>

int main()
{
    int N, * a, i, sum;


    while(scanf("%d", &N)!=EOF)
    {
        sum = 0;
        if(N==0)
            break;
        a = (int *)malloc(N * sizeof(int));
        for(i=0; i<N; i++)
        {
            scanf("%d", &a[i]);
            sum += a[i];
        }
        printf("%d\n", sum);
    }

    return 0;
}