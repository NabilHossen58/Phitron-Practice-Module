#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int sum[n];
    int summation = 0;

    for (int i = 0; i < n; i++)
    {
       scanf("%d",&sum[i]);
    }

    for (int i = 0; i < n; i++)
    {
        summation = summation + sum[i];
    }

    if(summation>0)
    {
        printf("%d",summation);
    }
    else{
        summation = summation * -1;
        printf("%d",summation);
    }
    
    
    return 0;
}