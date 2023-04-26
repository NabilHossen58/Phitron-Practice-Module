#include <stdio.h>

int main()
{
    int a,b,c,d;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    int ans1 = a+b+c;
    int ans2 = a+b*c;
    int ans3 = a+b-c;
    int ans4 = a-b+c;
    int ans5 = a-b*c;
    int ans6 = a-b-c;
    int ans7 = a*b+c;
    int ans8 = a*b*c;
    int ans9 = a*b-c;

    if(ans1==d)
    {
        printf("YES");
    }
    else if(ans2==d)
    {
        printf("YES");
    }
    else if(ans3==d)
    {
        printf("YES");
    }
    else if(ans4==d)
    {
        printf("YES");
    }
    else if(ans5==d)
    {
        printf("YES");
    }
    else if(ans6==d)
    {
        printf("YES");
    }
    else if(ans7==d)
    {
        printf("YES");
    }
    else if(ans8==d)
    {
        printf("YES");
    }
    else if(ans9==d)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}