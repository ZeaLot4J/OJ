#include<stdio.h>  
int main()  
{  
    int f[10]={1,1,2,6,24,120,720,5040,40320,362880};  
    int n;  
    double e;  
    printf("n e\n");  
    printf("- -----------\n");  
    printf("%d %d\n",0,1);  
    printf("%d %d\n",1,2);  
    printf("%d %.1f\n",2,2.5);  
    e=2.5;  
    for(n=3;n<=9;n++)  
    {  
        e+=1.0/f[n];  
        printf("%d %0.9f\n",n,e);  
    }  
    return 0;  
}  