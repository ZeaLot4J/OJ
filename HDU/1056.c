# include<stdio.h>

int main()
{    
    double c, sum;
    int card;

    while(scanf("%lf", &c)!=EOF)
    {
        card = 1;
        sum = 0;
        if(c == 0)
            break;
        while(sum<c)
        {
            card++;
            sum += 1.0 / card;
        }
        printf("%d card(s)\n", card-1);
    }
    
    return 0;
}