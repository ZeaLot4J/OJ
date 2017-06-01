#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}    
int main()
{
    int T;
    int n,a,b,i;
    int cnt;
    scanf("%u",&T);
    while(T--)
    {
        scanf("%d",&n);
        cnt=a=1;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&b);
            cnt=a/gcd(a,b)*b;//换一下，先除后乘，免得数据溢出 
            a=cnt;
        } 
        printf("%d\n",cnt);   
    }    
    return 0;
}    