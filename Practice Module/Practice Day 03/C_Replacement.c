#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if(array[i]>0)
        {
            printf("1 ");
        }
        else if(array[i]==0)
        {
            printf("0 ");
        }
        else
        {
            printf("2 ");
        }
    }
    
    return 0;
}