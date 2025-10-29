#include <stdio.h>

int main() {
    int a, b;
    char op;

    // Input numbers and operator
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);  // space before %c to ignore newline

    // Switch case for operation
    switch (op) {
        case '+':
            printf("Result: %d + %d = %d\n", a, b, a + b);
            break;

        case '-':
            printf("Result: %d - %d = %d\n", a, b, a - b);
            break;

        case '*':
            printf("Result: %d * %d = %d\n", a, b, a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result: %d / %d = %.2f\n", a, b, (float)a / b);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}
