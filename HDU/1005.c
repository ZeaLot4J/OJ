#include <stdio.h>
int main()
{
    int a,b,n;
    int f[201];
    int i;
    scanf("%d %d %d",&a,&b,&n);
    while (a!=0||b!=0||n!=0)
    {
        f[1]=1;
        f[2]=1;
        if (n>=3)
        {
            for(i=3;i<200;i++)
            {
                f[i]=(a*f[i-1]+b*f[i-2])%7;
                if ((f[i-1]==1)&&(f[i]==1))
                {
                    break;
                }
            }
            i=i-2;
            n=n%i;
            if (n==0)
            {
                n=i;
            }
            printf("%d\n",f[n]);
        }
        else
        {
            printf("1\n");
        }
        scanf("%d %d %d",&a,&b,&n);
    }
    return 0;
}