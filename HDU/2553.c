#include <stdio.h>


int main()
{
    int n;
    int array[11] = {0,1,0,0,2,10,4,40,92,352,724};
    while(scanf("%d", &n) != EOF && n)
    {
        printf("%d\n", array[n]);
    }
    return 0;
}