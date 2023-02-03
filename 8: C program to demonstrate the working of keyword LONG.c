#include <stdio.h>
int main()
{
    int a;
    long b;
    long long c;
    double d;
    long double e;

    printf("Size of Integer : %lu bytes\n Size of Long : %lu bytes\n Size of Long Long : %lu bytes\n Size of Double : %lu bytes\n Size of Long Double : %lu bytes\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(e));

    return 0;
}
