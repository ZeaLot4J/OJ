# include<stdio.h>

int main()
{
    int a, b, sum, n;

    scanf("%d", &n);
    while(n--)
    {
        scanf("%d%d", &a, &b);
        
        sum = a + b;

        printf("%d\n", sum);        
    }
    

    return 0;
}