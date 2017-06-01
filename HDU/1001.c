#include<stdio.h>
int main()
{
	int n,sum;
	sum=0;

    while(scanf("%d",&n)!=EOF)
    {
        sum=0;

        for(;n>0;n--)
        {
            sum+=n;
        }

		printf("%d\n\n",sum);
    }
	return 0;
}