#include <stdio.h>

int main()
{
    char character;

    scanf("%c", &character);

    if(character>=65 && character<90)
    {
        character = character + 1;
        printf("%c",character);
    }
    else if(character>=97 && character<122)
    {
        character = character + 1;
        printf("%c",character);
    }
    else if(character=='z')
    {
        printf("a");
    }

    return 0;
}