# include<stdio.h>
# include<math.h>

int main()
{
    int T, n, mod, a[10][4] = {{0},{1},{6,2,4,8},{1,3,9,7},{6,4},{5},{6},{1,7,9,3},{6,8,4,2},{1,9}};

    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);
        mod = n % 10;
        if(mod==0||mod==1||mod==5||mod==6)
        {
            printf("%d\n", mod);
        }
        else if(mod==4||mod==9)
        {
            printf("%d\n", a[mod][n%2]);
        }
        else
        {
            printf("%d\n", a[mod][n%4]);
        }
    }

    return 0;
}