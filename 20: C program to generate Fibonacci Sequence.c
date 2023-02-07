#include <stdio.h>
int main()
{
    int num, t1 = 0, t2 = 1;
    int nt = t1 + t2;

    printf("Enter the Range: ");
    scanf("%d", &num);

    printf("Fibonacci series is : %d %d ",t1,t2);

    for (int i = 3; i <= num; i++){
        printf("%d ", nt);
        t1 = t2;
        t2 = nt;
        nt = t1 + t2;

    }

    return 0;
}
