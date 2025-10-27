#include <stdio.h>
int main() {
    // /electric bill calculation
    int units,bill;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if(units >200)
    {
        printf("Your Electric bill is: %d", units*8);
    }
    else if(units<200 && units>100)
    {
        printf("Your Electric bill is: %d", units*10);
    }
    else if(units<=100)
    {
        printf("Your Electric bill is: %d", units);
    }
    return 0;
}
