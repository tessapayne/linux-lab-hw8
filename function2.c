#include <stdio.h>

int sumArray(int arr[], int size) {
    if (size == 0) 
{
        return 0;
    }

    return arr[size - 1] + sumArray(arr, size - 1);
}

int main(void) 
{
    int n;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) 
{
        puts("Invalid input.");
        return 1;
    }

    int arr[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) 
{
        if (scanf("%d", &arr[i]) != 1) 
{
            puts("Invalid input.");
            return 1;
        }
    }

    int total = sumArray(arr, n);
    printf("Sum of array elements = %d\n", total);

    return 0;
}
