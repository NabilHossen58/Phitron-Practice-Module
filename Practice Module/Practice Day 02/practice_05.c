#include <stdio.h>

int main()
{
    int num;

    scanf("%d",&num);

    int mod = num % 10;
    int dig = num / 10;

    if(dig%mod==0 || mod%dig==0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}