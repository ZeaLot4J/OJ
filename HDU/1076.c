# include<stdio.h>

int main()
{
    int T, Y, N;

    scanf("%d", &T);
    while(T--)
    {
        scanf("%d%d", &Y, &N);
        if((Y%4==0&&Y%100!=0)||(Y%400==0))
            N--;
        do
        {
            Y++;
            if((Y%4==0&&Y%100!=0)||(Y%400==0))
                N--;
        }while(N);
        printf("%d\n", Y);
    }

    return 0;
}