# include <stdio.h>
# include <string.h>

char str[1001][16];
int b[1001];
int main()
{
    int i, j, n, m, max;
    while (scanf("%d", &n)!=EOF&&n != 0)
    {
        getchar();
        for (i=0; i<n; ++i)
        {
            b[i] = 0;
            scanf("%s", str[i]);
        }

        for (i=0; i<n; ++i)
        {
            for (j=0; j<n; ++j)
            {
                if (strcmp(str[i], str[j]) == 0)
                {
                    b[i]++;
                }
            }
        }
        max = b[0];
        m = 0;
        for (i=1; i<n; ++i)
        {
            if (b[i]>max)
            {
                max = b[i];
                m = i;
            }
        }
        printf("%s\n", str[m]);
    }

    return 0;
}