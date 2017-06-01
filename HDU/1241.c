#include <stdio.h>

char map[101][101];
int move[8][2] = {{0,1},{-1,0},{0,-1},{1,0},{1,1},{-1,1},{-1,-1},{1,-1}};

void dfs(int r, int c)
{
    int i;
    if(map[r][c] != '@')
        return;

    map[r][c] = '*';
    for(i=0; i<8; i++)
    {
        dfs(r + move[i][0], c + move[i][1]);
    }
    return;
}
int main()
{
    int i, j, m, n, count;
    for(i=0; i<101; i++)
        for(j=0; j<101; j++)
            map[i][j] = '*';
    while(scanf("%d%d", &m, &n) != EOF && m)
    {
        count = 0;
        for(i=1; i<=m; i++)
            for(j=0; j<=n; j++)
                scanf("%c", &map[i][j]);

        for(i=1; i<=m; i++)
            for(j=1; j<=n; j++)
            {
                if(map[i][j] == '@')
                {
                    dfs(i, j);
                    count++;
                }
            }
        printf("%d\n", count);
    }
    return 0;
}