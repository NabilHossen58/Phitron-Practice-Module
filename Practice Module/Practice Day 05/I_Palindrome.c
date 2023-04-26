#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    scanf("%s",s);

    int i = 0;
    int j = strlen(s) -1;
    while (j>i)
    {
        if(s[i] == s[j])
        {
            i++;
            j--;
            if(j<=i)
            {
               break;
            }
        }
        else
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");  
    return 0;
}