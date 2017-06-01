#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
    int n,i,s;
    char a[100];
    cin>>n;
    getchar();
    while(n--)
    {
        s=0;
        gets(a);
        for(i=0;i<strlen(a);++i)
        {
            if(a[i]<0)
            s++;
        }
        cout<<s/2<<endl;
    }
}