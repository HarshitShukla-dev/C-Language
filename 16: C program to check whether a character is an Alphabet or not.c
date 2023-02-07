#include <stdio.h>
int main()
{
    char chr;

    printf("Enter Your Character: ");
    scanf("%c",&chr);

    if (chr >= 'a' && chr <= 'z' || chr >= 'A' && chr <= 'Z'){
        printf("%c is a character", chr);
    } else {
        printf("%c is not a character", chr);
    }

    return 0;
}
