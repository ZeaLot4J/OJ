# include<stdio.h>

int main()
{
    int a, b, sum;

    while(scanf("%d%d", &a, &b)!=EOF)
    {
        if(a==0&&b==0)
            break;    
        sum = a + b;
        printf("%d\n", sum);        
    }
    

    return 0;
}