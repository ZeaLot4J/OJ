# include <stdio.h>

int main()
{
    int N, a[101], T = 0, i;

    while (scanf("%d", &N) != EOF)
    {
        if (N == 0)
            break;
        for (i=1; i<=N; ++i)
        {
            scanf("%d", &a[i]);
        }
        for (i=1; i<=N; ++i)
        {
            if (i == 1)
            {
                T = (a[i] - 0) * 6 + 5;
                continue;
            }
            if (a[i] >= a[i-1])
            {
                T += 6 * (a[i] - a[i-1]) + 5;
            }
            else
            {
                T += 4 * (a[i-1] - a[i]) + 5;
            }
        }
        printf("%d\n", T);
    }

    return 0;
}