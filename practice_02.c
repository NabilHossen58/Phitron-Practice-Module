#include <stdio.h>

int main(){

    int a,b;

    scanf("%d %d",&a,&b);

    int summation = a + b;
    int subtraction = a - b;
    int multiplication = a * b;
    float division = (float)a/b;

    printf("%d\n%d\n%d\n%0.2f\n", summation,subtraction,multiplication,division);

    return 0;
}