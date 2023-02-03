#include <stdio.h>
int main()
{
    int Integer;
    float Float;
    double Double;
    char Character;

    printf("Size of Integer : %lu bytes \n", sizeof(Integer));
    printf("Size of Float : %lu bytes \n", sizeof(Float));
    printf("Size of Double : %lu bytes \n", sizeof(Double));
    printf("Size of Character : %lu byte \n", sizeof(Character));

    return 0;
}
