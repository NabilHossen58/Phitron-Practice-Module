#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d",&n);
 
    int sum[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&sum[i]);
    }
    
    int x;
    scanf("%d",&x);
    int ans = -1;
 
    for (int i = 0; i < n; i++)
    {
        if(x==sum[i])
        {
            ans = i;
            break;
        }
    }
    printf("%d",ans);
    
    
    return 0;
}