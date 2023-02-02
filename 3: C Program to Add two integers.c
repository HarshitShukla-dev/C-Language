#include <stdio.h>
int main() {
    int number1, number2, Sum;
    printf("Number 1 : ");
    scanf("%d",&number1);
    printf("Number 2 : ");
    scanf("%d",&number2);
    Sum = number1 + number2;
    printf("Sum of %d and %d is %d",number1,number2,Sum);
    return 0;
}
