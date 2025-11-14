#include <stdio.h>

int main() {
    int i, j, rows;

    // 1. Pattern: 8, 88, 888,...
    printf("Enter number of rows for 8 pattern: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("8");
        }
        printf("\n");
    }

    // 2. Pattern: $, $$, $$$,...
    printf("Enter number of rows for $ pattern: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("$");
        }
        printf("\n");
    }

    // 3. Pattern: $, $$, $$$,... in reverse (top-heavy)
    printf("Enter number of rows for reverse $ pattern: ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; i--) {       // start from rows down to 1
        for (j = 1; j <= i; j++) {
            printf("$");
        }
        printf("\n");
    }

    return 0;
}
