#include <stdio.h>

int main()
{
    int n, s, i;

    while(scanf("%d", &n)!=EOF&&n!=0)
    {   s = 1;
        for(i=0; i<n; i++)
        {
            s = s * n % 9;
            if(!s)
            {
                printf("9\n");
                break;
            }

        }
        if(s)
            printf("%d\n", s);
    }
    return 0;
}