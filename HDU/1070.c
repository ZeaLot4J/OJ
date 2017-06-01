# include<stdio.h>
# include<string.h>

struct milk
{
    char name[101];
    int P;
    int V;
};
int main()
{
    int T, N, i, j, day;
    struct milk mil[101];
    double min, pd;
    
    scanf("%d", &T);
    while(T--)
    {
        min = 999999999;
        scanf("%d", &N);
        for(i=1; i<=N; i++)
        {
            scanf("%s%d%d", mil[i].name, &mil[i].P, &mil[i].V);
            if(mil[i].V<200)
                continue;
            else if(mil[i].V>1000)
                day = 5;
            else
                day = mil[i].V / 200;
            pd = mil[i].P/(double)day;
            if(pd<min)
            {
                min = pd;
                j = i;
            }
            if(pd==min)
            {
                if(mil[i].V>mil[j].V)
                {
                    min = pd;
                    j = i;
                }
            }    
        }
        printf("%s\n", mil[j].name);
    }
    return 0;
}