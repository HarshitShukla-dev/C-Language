#include <stdio.h>
int main()
{
    int num;

    printf("Enter your number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("\n%d is Even", num);
    } else {
        printf("\n%d is Odd", num);
    }

    return 0;
}
