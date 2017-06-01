#include<iostream>  
#include<string>  
#include<cstring>  
#include<algorithm>  
#include<cstdio>  
#include<cmath>  
#include<cctype>  
#include<iomanip>  
#include<queue>  
 
using namespace std; 
const int maxn=100000; 
 
char st[maxn],et[maxn]; 
int vis[maxn],t; 
bool ok; 
 
void DFS(int x){ 
    if(et[x]=='m'){ 
        ok=true; return; 
    } 
    for(int i=0;i<t;++i){ 
        if(vis[i]||st[i]!=et[x])continue; 
        vis[i]=1; 
        DFS(i); 
        vis[i]=0; 
        if(ok)return; 
    } 
} 
 
int main() { 
    string s; 
    while(cin>>s){ 
        t=0; 
        while(s[0]!='0'){ 
            st[t]=s[0]; 
            et[t++]=s[s.size()-1]; 
            cin>>s; 
        } 
        memset(vis,0,sizeof(vis)); 
        ok=false; 
        for(int i=0;i<t;++i){ 
            if(st[i]!='b')continue; 
            vis[i]=1; 
            DFS(i); 
        } 
        if(ok)puts("Yes."); 
        else puts("No."); 
    } 
    return 0; 
} 