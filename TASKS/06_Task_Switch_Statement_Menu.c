#include <stdio.h>
int main() {
    int choice;
    printf("SWITCH Statement Menu:\n");
    printf("1. Display Day of the Week\n");
    printf("2. Simple Calculator\n");
    printf("3. Grade Based on Marks\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: 
        {
            int day;
            printf("Enter a number (1-7): ");
            scanf("%d", &day);
            switch(day) 
            {
                case 1: 
                    printf("Sunday\n"); 
                break;
                case 2: 
                    printf("Monday\n"); 
                break;
                case 3: 
                    printf("Tuesday\n"); 
                break;
                case 4: 
                    printf("Wednesday\n"); 
                break;
                case 5: 
                    printf("Thursday\n"); 
                break;
                case 6: 
                    printf("Friday\n"); 
                break;
                case 7: 
                    printf("Saturday\n"); 
                break;
                default: 
                    printf("Invalid input!\n");
                break;
            }
        break;    
        }
        case 2: 
        {
            char op;
            float num1, num2;
            printf("Enter operator (+, -, *, /): ");
            scanf(" %c", &op);
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            switch(op) 
            {
                case '+': 
                    printf("%.2f + %.2f = %.2f\n", num1, num2, num1+num2); 
                break;
                case '-': 
                    printf("%.2f - %.2f = %.2f\n", num1, num2, num1-num2); 
                break;
                case '*': 
                    printf("%.2f * %.2f = %.2f\n", num1, num2, num1*num2); 
                break;
                case '/': 
                    if(num2 != 0) 
                        {
                            printf("%.2f / %.2f = %.2f\n", num1, num2, num1/num2);
                        }
                        else 
                        {
                            printf("Cannot divide by zero!\n");
                        }
                break;
                default: 
                    printf("Invalid operator!\n");
                break;
            }
        break;      
        }
        case 3: 
        {
            int marks;
            printf("Enter your marks out of 100: ");
            scanf("%d", &marks);
            switch(marks / 10) 
            {
                case 10:
                case 9: 
                    printf("Grade: A+\n"); 
                break;
                case 8: 
                    printf("Grade: A\n"); 
                break;
                case 7: 
                    printf("Grade: B\n"); 
                break;
                case 6: 
                    printf("Grade: C\n"); 
                break;
                case 5: 
                    printf("Grade: D\n"); 
                break;
                default: 
                    printf("Grade: F\n");
                break;
            }
        break;   
        }
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
