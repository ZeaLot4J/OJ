#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[1001], * p, strtemp[1001], * q;
    int num[1001], count = 0, flag = 0;
    int i, j, t;
    

    while(scanf("%s", str)!=EOF)
    {
        count = 0;
        p = str;
        q = strtemp;
        while(*p!='\0')
        {
            if(*p=='5')
            {
                flag = 1;
                if(p!=str&&*(p-1)!='5')
                {
                    *q = '\0';
                    num[count++] = atoi(strtemp);        
                    q = strtemp;
                }
                p++;
            }
            else if(*p=='0')
            {
                if(flag)
                {
                    p++;
                }
                else
                {
                    *q = *p;
                    q++;
                    p++;
                }
            }
            else
            {
                *q = *p;
                q++;
                p++;
                flag = 0;
            }
        }
        if(*(p-1)!='5')
        {
            *q = '\0';
            num[count++] = atoi(strtemp);
        }
        
        
        for(i=0; i<count-1; i++)
            for(j=i+1; j<count; j++)
                if(num[j]<num[i])
                {
                    t = num[j];
                    num[j] = num[i];
                    num[i] = t;
                }
        printf("%d", num[0]);
        for(i=1; i<count; i++)
            printf(" %d", num[i]);
        printf("\n");
    }
    return 0;
}