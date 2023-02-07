#include <stdio.h>
int main()
{
    int num, fact;

    printf("Enter the number: ");
    scanf("%d", &num);

    fact = 1;
    for (int i = 1; i <= num; i++){
        fact *= i;
    }
    
    printf("Factorial is : %d", fact);

    return 0;
}
