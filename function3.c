#include <stdio.h>

int gcd(int x, int y) {
    if (x % y == 0) 
{
        return y;
    }
    return gcd(y, x % y);
}

int main(void) 
{
    int a1, b1;
    int a2, b2;

    printf("Enter first pair of positive integers (x y): ");
    if (scanf("%d %d", &a1, &b1) != 2 || a1 <= 0 || b1 <= 0) 
{
        puts("Invalid input for first pair.");
        return 1;
    }

    printf("Enter second pair of positive integers (x y): ");
    if (scanf("%d %d", &a2, &b2) != 2 || a2 <= 0 || b2 <= 0) 
{
        puts("Invalid input for second pair.");
        return 1;
    }

    printf("gcd(%d, %d) = %d\n", a1, b1, gcd(a1, b1));
    printf("gcd(%d, %d) = %d\n", a2, b2, gcd(a2, b2));

    return 0;
}
