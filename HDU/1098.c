# include<stdio.h>

int main()
{
    int k, a, f;

    while(scanf("%d", &k)!=EOF)
    {
        if(k%65==0)
        {
            printf("no\n");
            continue;
        }
        for(a=1; a<=65; a++)
        {
            f = 18 + k * a;
            if(f%65==0)
            {
                printf("%d\n", a);
                break;
            }    
        }
        if(a==66)
        {
            printf("no\n");
        }
    }

    return 0;
}