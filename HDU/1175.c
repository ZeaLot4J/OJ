#include <stdio.h>  
#include <string.h>  
int map[1005][1005];  
int vis[1005][1005];  
int n,m,x1,x2,y1,y2,flag;  
  
void dfs(int x,int y,int z,int k)//x,y坐标，z朝向(1:up,2:down,3:left,4right)，k转弯次数  
{  
    if(flag)  
    return;  
    if(k>=3)//转弯超过两次，不行  
    return ;  
    if(x<=0 || y<=0 || x>n || y>m)//越界  
    return ;  
    if(x == x2 && y == y2)//找到了  
    {  
        flag = 1;  
        return ;  
    }  
    if(k == 2)//剪枝，转弯两次时，看目的点的坐标与现在的朝向是否在一个方向上，不在的话就返回  
    {  
        if(!(z == 1 && x>x2 && y==y2 || z == 2 && x<x2 && y==y2 || z == 3 && y>y2 && x==x2 || z==4 && y<y2 && x==x2))  
        return;  
    }  
    if(map[x][y]!=0) return;  
    if(vis[x][y]) return ;  
    vis[x][y] = 1;  
    if(z == 1)//上  
    {  
        dfs(x-1,y,1,k);  
        dfs(x+1,y,2,k+1);  
        dfs(x,y-1,3,k+1);  
        dfs(x,y+1,4,k+1);  
    }  
    else if(z == 2)//下  
    {  
        dfs(x-1,y,1,k+1);  
        dfs(x+1,y,2,k);  
        dfs(x,y-1,3,k+1);  
        dfs(x,y+1,4,k+1);  
    }  
    else if(z == 3)//左  
    {  
        dfs(x-1,y,1,k+1);  
        dfs(x+1,y,2,k+1);  
        dfs(x,y-1,3,k);  
        dfs(x,y+1,4,k+1);  
    }  
    else if(z == 4)//右  
    {  
        dfs(x-1,y,1,k+1);  
        dfs(x+1,y,2,k+1);  
        dfs(x,y-1,3,k+1);  
        dfs(x,y+1,4,k);  
    }  
    vis[x][y] = 0;  
}  
  
int main()  
{  
    while(~scanf("%d%d",&n,&m))  
    {  
        if(!n&&!m)  
            break;  
        int i,j;  
        for(i = 1; i<=n; i++)  
        {  
            for(j = 1; j<=m; j++)  
            {  
                scanf("%d",&map[i][j]);  
            }  
        }  
        int t;  
        scanf("%d",&t);  
        while(t--)  
        {  
            flag = 0;  
            memset(vis,0,sizeof(vis));  
            scanf("%d%d%d%d",&x1,&y1,&x2,&y2);  
            if(x1 == x2 && y1 == y2 && map[x1][y1]!=0)//如果是同一左边，则否定  
                printf("NO\n");  
            else if(map[x1][y1] == map[x2][y2] && map[x1][y1])//不同坐标，值相同且不为0  
            {  
                dfs(x1-1,y1,1,0);  
                dfs(x1+1,y1,2,0);  
                dfs(x1,y1-1,3,0);  
                dfs(x1,y1+1,4,0);  
                if(flag)  
                    printf("YES\n");  
                else  
                    printf("NO\n");  
            }  
            else  
                printf("NO\n");  
        }  
    }  
  
    return 0;  
}  