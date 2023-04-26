#include <stdio.h>
#include <string.h>

int main()
{
    char a[11];
    char b[11];

    scanf("%s",a);
    scanf("%s",b);

    int size_of_a = strlen(a);
    int size_of_b = strlen(b);
    printf("%d %d\n",size_of_a,size_of_b);

    printf("%s%s\n",a,b);

    if (size_of_a > 0 && size_of_b > 0) {
        int tmp = a[0];
        a[0] = b[0];
        b[0] = tmp;
    }

    printf("%s %s",a,b);

    return 0;
}