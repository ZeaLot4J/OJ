# include <stdio.h>
# include <string.h>

int main()
{
    char key[11], code[1000];
    int i, len;
    
    while(gets(key)&&strcmp(key, "ENDOFINPUT"))
    {
        if(!strcmp(key, "END"))
            continue;
        if(!strcmp(key, "START"))
        {
            gets(code);
            strupr(code);
            len = strlen(code);
            for(i=0; i<len; ++i)
            {
                if(code[i]>=65&&code[i]<=90)
                {
                    if(code[i]<=69)
                    {
                        if(code[i]=='A')
                            code[i] = 'V';
                        else
                            if(code[i]=='B')
                            code[i] = 'W';
                        else 
                            if(code[i]=='C')
                            code[i] = 'X';
                        else 
                            if(code[i]=='D')
                            code[i] = 'Y';
                        else 
                            code[i] = 'Z';
                    }
                    else
                        code[i] -= 5;
                }    
            }
        }
        puts(code);
    }

    return 0;
}