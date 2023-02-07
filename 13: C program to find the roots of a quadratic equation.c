#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float root1, root2, d;

    printf("ax^2 + bx + c : Enter the values of a, b and c : ");
    scanf("%d %d %d",&a,&b,&c);

    d = (pow(b,2)) - (4 * a * c);

    if (d == 0){
        root1 = root2 = (-b) / (2 * a);
        printf("Both roots will be equal. Roots are: %.2f %.2f",root1, root2);
    } else if (d > 0){
        root1 = ((-b) + (pow(d,0.5))) / (2 * a);
        root2 = ((-b) - (pow(d,0.5))) / (2 * a);
        printf("Root 1 : %.2f \nRoot 2 : %.2f",root1, root2);
    }else {
        d = pow(-d,0.5) / (2 * a);
        root1 = root2 = (-b) / (2 * a);
        printf("Roots will be Imaginary. \nRoot 1 : %.2f + %.2fi \nRoot 2 :%.1f - %.2fi",root1, d, root2, d);
    }

    return 0;
}
