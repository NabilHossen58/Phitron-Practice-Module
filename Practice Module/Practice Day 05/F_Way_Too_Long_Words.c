#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);

    for (int i = 0; i < t; i++)
    {
        char s[100];
        scanf("%s",s);
        if(strlen(s)>10)
        {
            char first = s[0];
            int middle = strlen(s) - 2;
            char last = s[strlen(s+1)];

            printf("%c%d%c\n",first,middle,last);
        }
        else{
            printf("%s\n",s);
        }
    }
    
    return 0;
}