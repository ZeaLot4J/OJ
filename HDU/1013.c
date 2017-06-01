# include <stdio.h>
# include <string.h>

int main()
{
    int sum, len, i;
    char dig[1001];

    while (scanf("%s", dig)!=EOF)
    {
        if (dig[0]=='0')
            break;
        len = strlen(dig);
        sum = 0;
        for (i=0; i<len; ++i)
        {
            sum += dig[i] - 48;
            while (sum>=10)
            {
                if (sum<100)
                    sum = sum/10 + sum%10;
                else if (sum>=100&&sum<1000)
                    sum = sum/100 + sum%10 + sum/10%10;
                else
                    sum = sum/1000 + sum%10 + sum/10%100 + sum/10/10%10;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}