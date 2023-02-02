#include <stdio.h>
int main() 
{
    float number1, number2, Mul;
    
    printf("Number 1 : ");
    scanf("%f",&number1);
    
    printf("Number 2 : ");
    scanf("%f",&number2);
    
    Mul = number1 * number2;
    
    printf("Multiplication of %f and %f is %f",number1,number2,Mul);
    
    return 0;
}
