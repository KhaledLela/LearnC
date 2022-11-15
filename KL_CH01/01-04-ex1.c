#include <stdio.h>

int main()
{
    int a, b, max;

    printf("Enter a value: ");
    scanf("%d", &a);
    printf("Enter another value: ");
    scanf("%d", &b);
    max = a > b ? a : b;

    printf("%d is the max value: \n", max);

    return 0;
}