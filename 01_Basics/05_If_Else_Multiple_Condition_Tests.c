#include <stido.h>
int main() {
    // divisibility check 5 & 11
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 5 == 0 && num % 11 == 0) {
        printf("%d is divisible by both 5 and 11.\n", num);
    } else {
        printf("%d is not divisible by both 5 and 11.\n", num);
    }
    // divisibility check 3 & 7
    printf("Enter another number: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 7 == 0) {
        printf("%d is divisible by both 3 and 7.\n", num);
    } else {
        printf("%d is not divisible by both 3 and 7.\n", num);
    }

    // leap year check
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    // vowel or consonant check
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }
    // positive, negative or zero check
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number > 0) {
        printf("%d is positive.\n", number);
    } else if (number < 0) {
        printf("%d is negative.\n", number);
    } else {
        printf("The number is zero.\n");
    }
    
    return 0;
}
    