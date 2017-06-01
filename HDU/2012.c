# include <stdio.h>
# include <math.h>

int main()
{
    int x, y, n, z, a, i, sign;

    while (scanf("%d%d", &x, &y)!=EOF)
    {
        if (x==0&&y==0)
            break;
        for (n=x; n<=y; ++n)
        {
            z = n * n + n + 41;
            a = sqrt(z);
            for (i=2; i<=a; ++i)
            {
                if ((z%i)==0)
                {
                    sign = 0;
                    break;
                }
                else
                {
                    sign = 1;
                }
            }
            if (sign==0)
                break;
        }
        if (sign==0)
        {
            printf("Sorry\n");
        }
        else
            printf("OK\n");
    }

    return 0;
}