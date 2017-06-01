#include <stdio.h>
#include <math.h>

int d[4][2] = {{0,1},{0,-1},{-1,0},{1, 0}};
int flag;
int n, m, t, flag;
int di, dj;
char map[9][9];
void dfs(int si, int sj, int cnt)
{
    if(si == di && sj == dj && cnt == t)
        flag = 1;
    if(flag)    return;
    int i, tmp;
    tmp  = t-cnt-abs(si-di)-abs(sj-dj);
    if(tmp < 0 || tmp&1)    return;
    for(i = 0; i < 4; i++)
    {
        int a = si+d[i][0];
        int b = sj+d[i][1];
        if(a >= 0 && a < n && b >= 0 && b < m && map[a][b] != 'X')
        {
            map[a][b] = 'X';
            dfs(a,b,cnt+1);
            map[a][b] = '.';
        }
    }
}
int main()
{
    while(scanf("%d%d%d",&n, &m, &t),n||m||t)
    {
        char tt;
        int i, j, w = 0;
        int si,sj;
        scanf("%c",&tt);
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                scanf("%c",&map[i][j]);
                if(map[i][j] == 'X')    w++;
                else if(map[i][j] == 'S')
                {
                    si = i; sj = j;
                }
                else if(map[i][j] == 'D')
                {
                    di = i; dj = j;
                }
            }
            scanf("%c",&tt);
        }
        if(n*m - w <= t)
        {
            printf("NO\n");
            continue;
        }
        flag = 0;
        map[si][sj] = 'X';
        dfs(si,sj,0);
        if(flag)    printf("YES\n");
        else     printf("NO\n");
    }
    return 0;
}