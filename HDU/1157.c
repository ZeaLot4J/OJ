#include <stdio.h>
#include <stdlib.h>
int a[1000000];
int cmp(const void * a, const void * b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    int mid, N, i;

    while(scanf("%d", &N)!=EOF)
    {    
        for(i=0; i<N; i++)
            scanf("%d", &a[i]);
        qsort(a,N,sizeof(int),cmp);
        mid = a[(N-1)/2];
        printf("%d\n", mid);
    }

    return 0;
}