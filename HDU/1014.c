# include <stdio.h>
# include <malloc.h>

int main()
{
    int STEP, MOD, * seed, i;

    while(scanf("%d %d", &STEP, &MOD)!=EOF)
    {
        seed = (int *)malloc(MOD * sizeof(int *));
        seed[0] = 0;

        for(i=1; i<=MOD; ++i)
        {
            seed[i] = (seed[i-1] + STEP) % MOD;
            if(seed[i] == 0)
                break;
        }
        if(i == MOD)
            printf("%10d%10d    Good Choice\n\n", STEP, MOD);
        else
            printf("%10d%10d    Bad Choice\n\n", STEP, MOD);
    }

    return 0;
}