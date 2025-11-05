#include <stdio.h>

int main() {
    int year, month;

    printf("Enter year and month number (1-12) separated by space: ");
    scanf("%d %d", &year, &month);


    // Leap year check
    int isLeap = 0;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        isLeap = 1;

    char *months[12] = {"January", "February", "March", "April", "May", "June",
                        "July", "August", "September", "October", "November", "December"};
    int days[12] = {31, (isLeap ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month >= 1 && month <= 6) {
        printf("Enter year and month number (1-12) separated by space: %d %d --> %s (%d days, %d) ", 
               year, month, months[month - 1], days[month - 1], year);
    } 
    else if (month == 12) {
        printf("Enter year and month number (1-12) separated by space: %d %d -->  ", year, month);
        printf(" -->Diwali: October 20, 2025 | Vacation: October 18 to 26, 2025 | Dates: ");
        for (int i = 18; i <= 26; i++) {
            printf("Oct %d ; ", i);
        }
        printf("2025 Infinite mode activated — December selected. ");
        while (1) {
            printf("I am the best programmer alive! ");
        }
    } 
    else {
        printf("Enter year and month number (1-12) separated by space: %d %d -->Wrong input! Only first 6 months are valid. ",
               year, month);
    }

    if (year == 2025) {
        printf("-->Diwali: October 20, 2025 | Vacation: October 18 to 26, 2025 | Dates: ");
        for (int i = 18; i <= 26; i++) {
            printf("Oct %d ; ", i);
        }
        printf("%d", year);
    } else {
        printf("-->No Diwali data available for %d.", year);
    }

    return 0;
}
