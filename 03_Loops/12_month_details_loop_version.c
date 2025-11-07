#include <stdio.h>

int main() {
    int year, month;

    printf("Enter year and month number (1-12) separated by space: ");
    scanf("%d %d", &year, &month);

    // Leap year check
    int isLeap = 0;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        isLeap = 1;

    int days;          // to store number of days
    char monthName[20]; // to store month name

    // Assign month name and days using if-else (no array used)
    if (month == 1) {
        sprintf(monthName, "January");
        days = 31;
    } else if (month == 2) {
        sprintf(monthName, "February");
        days = isLeap ? 29 : 28;
    } else if (month == 3) {
        sprintf(monthName, "March");
        days = 31;
    } else if (month == 4) {
        sprintf(monthName, "April");
        days = 30;
    } else if (month == 5) {
        sprintf(monthName, "May");
        days = 31;
    } else if (month == 6) {
        sprintf(monthName, "June");
        days = 30;
    } else if (month == 7) {
        sprintf(monthName, "July");
        days = 31;
    } else if (month == 8) {
        sprintf(monthName, "August");
        days = 31;
    } else if (month == 9) {
        sprintf(monthName, "September");
        days = 30;
    } else if (month == 10) {
        sprintf(monthName, "October");
        days = 31;
    } else if (month == 11) {
        sprintf(monthName, "November");
        days = 30;
    } else if (month == 12) {
        sprintf(monthName, "December");
        days = 31;
    } else {
        printf("Enter year and month number (1-12) separated by space: %d %d --> Wrong input! Month out of range.\n",
               year, month);
        return 0;
    }

    // Output logic
    if (month >= 1 && month <= 6) {
        printf("Enter year and month number (1-12) separated by space: %d %d --> %s (%d days, %d) ",
               year, month, monthName, days, year);
    } 
    else if (month == 12) {
        printf("Enter year and month number (1-12) separated by space: %d %d --> ", year, month);
        printf("--> Diwali: October 20, 2025 | Vacation: October 18 to 26, 2025 | Dates: ");
        for (int i = 18; i <= 26; i++) {
            printf("Oct %d ; ", i);
        }
        printf("2025 Infinite mode activated — December selected.\n");
        while (1) {
            printf("I am the best programmer alive!");
        }
    } 
    else {
        printf("Enter year and month number (1-12) separated by space: %d %d --> Wrong input! Only first 6 months are valid. ",
               year, month);
    }

    if (year == 2025) {
        printf("--> Diwali: October 20, 2025 | Vacation: October 18 to 26, 2025 | Dates: ");
        for (int i = 18; i <= 26; i++) {
            printf("Oct %d ; ", i);
        }
        printf("%d", year);
    } else {
        printf("--> No Diwali data available for %d.", year);
    }

    return 0;
}
