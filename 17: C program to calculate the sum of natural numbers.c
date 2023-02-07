#include <stdio.h>
int main()
{
    int num, sum;

    printf("Enter the range: ");
    scanf("%d", &num);

    sum = (num * (num + 1)) / 2 ;

    printf("Sum is : %d\n", sum);

    return 0;
}
