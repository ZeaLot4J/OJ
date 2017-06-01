# include<stdio.h>
# include<malloc.h>

int main()
{
    int a, b, sum;

    while(scanf("%d%d", &a, &b)!=EOF)
    {
        sum = a + b;
        printf("%d\n\n", sum);
    }

    return 0;
}