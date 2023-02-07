#include <stdio.h>
int main()
{
    char chr;
    int condition;
    
    printf("Enter your character : ");
    scanf("%c", &chr);

    (chr == 'a' || chr == 'A' || chr == 'e' || chr == 'E' || chr == 'i' || chr == 'I' || chr == 'o' || chr == 'O' || chr == 'u' || chr == 'U') ? printf("%c is a Vowel", chr) : printf("%c is a consonent",chr);

    return 0;    
}
