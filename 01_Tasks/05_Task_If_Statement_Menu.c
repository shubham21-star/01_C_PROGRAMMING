#include <stdio.h> 
int main() {
    int choice;
    printf("IF Statement Menu:\n");
    printf("1. Check Positive/Negative/Zero\n");
    printf("2. Check Even/Odd\n");
    printf("3. Find Largest of Three Numbers\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    if(choice == 1) {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        if(num > 0)
        {
            printf("The number is positive.\n");
        }
        else if(num < 0) 
        {
            printf("The number is negative.\n");
        }
        else 
        {
            printf("The number is zero.\n");
        }
    }
    else if(choice == 2) {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        if(num % 2 == 0) 
        {
            printf("The number is even.\n");
        }
        else 
        {
            printf("The number is odd.\n");
        }
    }
    else if(choice == 3) {
        int a, b, c;
        printf("Enter three numbers: ");
        scanf("%d %d %d", &a, &b, &c);
        if(a >= b && a >= c) 
        {
            printf("Largest number is %d\n", a);
        }
        else if(b >= a && b >= c)
        {
             printf("Largest number is %d\n", b);
        }
        else 
        {
            printf("Largest number is %d\n", c);
        }
    }
    else 
    {
        printf("Invalid choice!\n");
    }

    return 0;
}
