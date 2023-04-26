#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int max_num = 0;
    int min_num = INT_MAX;
    int index = 0, jendex = 0;

    for (int i = 0; i < n; i++)
    {
        if(a[i]>max_num)
        {
            max_num = a[i];
            index = i;
        }
        if(a[i]<min_num)
        {
            min_num = a[i];
            jendex = i;
        }
    }

    int tmp = a[index];
    a[index] = a[jendex];
    a[jendex] = tmp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]); 
    }
    
    return 0;
}

