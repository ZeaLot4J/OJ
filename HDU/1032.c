# include <stdio.h>

int main()
{
    int a, b, i, j, t, count1, count2;

    while (scanf("%d%d", &a, &b)!=EOF)
    {
        printf("%d %d", a, b);
        if (a>b)
        {
            t = a;
            a = b;
            b = t;
        }
        count1 = 1, count2 = 1;
        for (i=a; i<=b; i++)
        {
            j = i;
            count1 = 1;
            while (j!=1)
            {
                count1++;
                if(j%2==0)
                    j = j / 2;
                else
                    j = 3 * j + 1;
                count2 = (count2>count1?count2:count1);
            }
        }
        printf(" %d\n", count2);
    }
    return 0;
}