# include<stdio.h>

int main()
{
    int a, b, end, p[10][4] = {{0},{1},{6,2,4,8},{1,3,9,7},{6,4},{5},{6},{1,7,9,3},{6,8,4,2},{1,9}};
    while(scanf("%d%d", &a, &b)!=EOF)
    {
        end = a % 10;
        if(end==0||end==1||end==5||end==6)
        {
            printf("%d\n", end);
        }
        else if(end==4||end==9)
        {
            printf("%d\n", p[end][b%2]);
        }
        else if(end==2||end==3||end==7||end==8)
        {
            printf("%d\n", p[end][b%4]);
        }
    }

    return 0;
}