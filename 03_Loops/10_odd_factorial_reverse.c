#include <stdio.h>

int main()
{
    // Print all odd numbers from 0 to 99
    int i = 0;
    while (i < 100)
    {
        if (i % 2 != 0)
            printf("%d\n", i);
        i++;
    }

    // Calculate factorial of 10
    int fact = 1;
    i = 10;
    while (i > 0)
    {
        fact = fact * i;
        i--;
    }
    printf("Factorial = %d\n", fact);

    // Reverse a given number
    int num, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    printf("Reversed number = %d\n", rev);

    return 0;
}
