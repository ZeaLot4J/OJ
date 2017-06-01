#include <stdio.h>

int get_GCD(int m, int n)
{
    int t;
    t = m % n;
    if(!t)
    {
        return n;
    }
    else
    {
        get_GCD(n,t);
    }
}
int main()
{
    int a, b, gcd, lcm;

    while(scanf("%d%d", &a, &b)!=EOF)
    {
        gcd = get_GCD(a, b);
        lcm = a * b / gcd;
        printf("%d\n", lcm);
    }
    return 0;
}