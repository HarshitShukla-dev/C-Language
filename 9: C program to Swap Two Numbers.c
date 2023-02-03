// a: Using temp variable
#include <stdio.h>
int main()
{
    int num1, num2 ,temp;

    printf("Number 1: ");
    scanf("%d", &num1);
    
    printf("Number 2: ");
    scanf("%d", &num2);

    temp = num2;
    num2 = num1;
    num1 = temp;
    
    printf("Number 1 is : %d \nNumber 2 is : %d\n", num1, num2);

    return 0;
}

// b: without using temp variable
#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Number 1: ");
    scanf("%d", &num1);
    
    printf("Number 2: ");
    scanf("%d", &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    
    printf("Number 1 is : %d \nNumber 2 is : %d\n", num1, num2);

    return 0;
}
