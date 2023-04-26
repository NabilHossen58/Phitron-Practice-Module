#include <stdio.h>
#include <limits.h>

int main()
{
    int n, min =INT_MAX, position;
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if(array[i]<min)
        {
            min = array[i];
            position = i + 1;
        }
    }
    printf("%d %d",min,position);
    
    return 0;
}