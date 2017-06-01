# include <stdio.h>

int main()
{
    int N, n, m, a, b, count, count1, res;

    scanf("%d", &N);

    while(N--)
    {
        count1 = 0;
        while(1)
        {
            scanf("%d%d", &n, &m);
            ++count1;
            count = 0;
            if(n==0 && m==0)
            {
                break;
            }
            for(a=1; a<n; ++a)
            {
                for(b=a+1; b<n; ++b)
                {
                    res = (a*a+b*b+m) % (a*b);
                    if(res==0)
                        ++count;
                }
            }
            printf("Case %d: %d\n", count1, count);
        }
        if(N)
            printf("\n");
    }

    return 0;

}