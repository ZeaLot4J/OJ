# include <stdio.h>

int main()
{
    int height1, height2, height3, height = 168;

    while(scanf("%d%d%d", &height1, &height2, &height3)!=EOF)
    {
        if(height>=height1)
            printf("CRASH %d\n", height1);
        else
        {
            if(height>=height2)
                printf("CRASH %d\n", height2);
            else
            {
                if(height>=height3)
                    printf("CRASH %d\n", height3);
                else
                    printf("NO CRASH\n");
            }
        }
    }
    return 0;
}