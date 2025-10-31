#include <stdio.h>

int main() {
    int year, month;

    printf("Enter year: ");
    scanf("%d", &year);

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    // Leap year check
    int isLeap = 0;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        isLeap = 1;

    // Months data
    char *months[12] = {"January", "February", "March", "April", "May", "June",
                        "July", "August", "September", "October", "November", "December"};
    int days[12] = {31, (isLeap ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Validation
    if (month >= 1 && month <= 6) {
        printf("\n%s (%d days, %d)", months[month - 1], days[month - 1], year);
    } 
    else if (month == 12) {
        printf("\nDiwali: October 20, 2025 | Vacation: October 18 to 26, 2025 | Dates: ");
        for (int i = 18; i <= 26; i++) {
            printf("Oct %d ; ", i);
        }
        printf("2025");

        printf("\n\nInfinite mode activated — December selected.\n");
        while (1) {
            printf("I am the best programmer alive! ");
        }
    } 
    else {
        printf("\nWrong input! Only first 6 months are valid.");
    }

    // Diwali vacation always printed (for every year)
    if (year == 2025) {
        printf("\n\nDiwali: October 20, 2025 | Vacation: October 18 to 26, 2025 | Dates: ");
        for (int i = 18; i <= 26; i++) {
            printf("Oct %d ;  ", i);
        }
        printf("%d", year);
    } else {
        printf("\n\nNo Diwali data available for %d.", year);
    }

    return 0;
}
