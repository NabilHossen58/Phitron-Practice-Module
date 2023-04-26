#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);

    int v[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&v[i]);
    }
     
    int sumOfEven = 0;
    int sumOfOdd = 0;
    
    if(n>0)
    {
        for(int i = 0; i<n ; i++)
        {
            if(v[i]%2==0)
            {
                sumOfEven = sumOfEven + v[i];
            }
            else{
                sumOfOdd = sumOfOdd + v[i];
            }
        }
        printf("%d %d",sumOfEven,sumOfOdd);
    }
    
    
    
    
    return 0;
}
