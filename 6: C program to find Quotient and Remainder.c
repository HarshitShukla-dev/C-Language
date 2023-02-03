#include <stdio.h>
int main()
{
    int num1, num2, quotient, remainder;

    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    scanf("%d", &num2);

    quotient = num1 / num2;
    remainder = num1 % num2;

    printf("\nQuotient : %d\nRemainder : %d\n", quotient, remainder);

    return 0;
}
