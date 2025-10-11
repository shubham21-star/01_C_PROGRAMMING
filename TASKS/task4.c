#include <stdio.h>

int main() {
    int units;
    float amount, total;

    printf("\n============================================\n");
    printf("            ELECTRICITY BILL SYSTEM           \n");
    printf("============================================\n");

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    printf("\n--------------------------------------------\n");

    // Bill calculation
    if(units >200)
    {
        printf("Your Electric bill is : Rs.%d", units*8);
    }
    else if(units<200 && units>100)
    {
        printf("Your Electric bill is  :Rs.%d", units*10);
    }
    else if(units<=100)
    {
        printf("Your Electric bill is : Rs.%d", units);
    }
    // add a fixed meter charge
    total = amount + 100.0;

    // Display Bill Summary
    printf("\n--------------------------------------------\n");
    printf(" \n\n            BILL SUMMARY  \n");
    printf("--------------------------------------------\n");
    printf("Units Consumed     : %d units\n", units);
    printf("Energy Charges     : RS.%f\n", amount);
    printf("Meter Charge       : RS.100.00\n");
    printf("--------------------------------------------\n");
    printf("Total Amount Payable: RS.%f\n", total+units);
    printf("--------------------------------------------\n");
    printf("         Thank you! Save Electricity \n");
    printf("============================================\n");

    return 0;
}
