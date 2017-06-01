#include <stdio.h>

char room[30][30];
int move[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
int cnt;

void dfs(int r, int c)
{
    int i;
    if(room[r][c] == '#')
    {
        return;
    }
    cnt++;
    for(i=0; i<4; i++)
    {
        room[r][c] = '#';
        dfs(r+move[i][0], c+move[i][1]);
    }
    return;
}

int main()
{
    int W, H;
    int i, j, si, sj;

    while(scanf("%d%d", &W, &H) != EOF)
    {
        if(W==0 || H==0)
            break;
        cnt = 0;
        for(i=0; i<30; i++)
            for(j=0; j<30; j++)
                room[i][j] = '#';
        for(i=1; i<=H; i++)
            for(j=0; j<=W; j++)
            {
                scanf("%c", &room[i][j]);
                if(room[i][j] == '@')
                {
                    si = i;
                    sj = j;
                }
            }
        for(i=1; i<=H; i++)
            room[i][0] = '#';
        dfs(si, sj);
        printf("%d\n", cnt);
    }

    return 0;
} 