#include <stdio.h>
int main()
{
    int number;

    printf("Enter your Number : ");
    scanf("%d",&number);

    if (number <= 0){
        if (number == 0){
            printf("You Entered Zero");
        } else {
            printf("%d is Negative", number);
        }
    } else {
        printf("%d is Positive", number);
    }

    return 0;
}
