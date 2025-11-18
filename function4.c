#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <time.h>

int sumAll(int count, ...) 
{
    va_list args;
    va_start(args, count);

    int total = 0;
    for (int i = 0; i < count; i++) 
{
        total += va_arg(args, int);
    }

    va_end(args);
    return total;
}

int main(void) 
{
    srand(time(NULL));

    int a1 = rand() % 99 + 1;
    int a2 = rand() % 99 + 1;
    int a3 = rand() % 99 + 1;
    int a4 = rand() % 99 + 1;

    printf("Random 4 numbers: %d %d %d %d\n", a1, a2, a3, a4);
    printf("Sum = %d\n\n", sumAll(4, a1, a2, a3, a4));

    int b1 = rand() % 99 + 1;
    int b2 = rand() % 99 + 1;
    int b3 = rand() % 99 + 1;
    int b4 = rand() % 99 + 1;
    int b5 = rand() % 99 + 1;
    int b6 = rand() % 99 + 1;

    printf("Random 6 numbers: %d %d %d %d %d %d\n",
           b1, b2, b3, b4, b5, b6);
    printf("Sum = %d\n", sumAll(6, b1, b2, b3, b4, b5, b6));

    return 0;
}
