#include <stdio.h>
int main()
{
    int num, mult;
    int i = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (i < 11)
    {
     printf("%d x %d = %d\n", num, i, num*i); 
     i++;  
    }

    return 0;
    
}
