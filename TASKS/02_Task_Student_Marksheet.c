#include <stdio.h>
int main() {
    int m,e,h,s,st,roll_no,total;
    float percent;
    char grade,student[50];

    printf("\nEnter NAME: ");
    scanf("%s", &student);
    printf("Enter ROLL NO: ");
    scanf("%d", &roll_no);

    printf("\nEnter marks of 5 subjects:\n");
    scanf("%d%d%d%d%d", &m, &e, &h, &s, &st);

    // Calculate total and percentage
    total = m+e+h+s+st;
    percent = total / 5.0;

    // percentage conditions
    if (percent > 90)
        grade = 'A';
    else if (percent >= 80 && percent <= 90)
        grade = 'B';
    else if (percent >= 70 && percent < 80)
        grade = 'C';
    else if (percent >= 50 && percent < 70)
        grade = 'D';
    else
        grade = 'F'; 

    // Display Result (Marksheet Format)
        printf("\n================= MARKSHEET =================\n");
        printf(" Name      : %s\n", student);
        printf(" Roll No   : %d\n", roll_no);
        printf(" Subject 1 : %d\n", m);
        printf(" Subject 2 : %d\n", e);
        printf(" Subject 3 : %d\n", h);
        printf(" Subject 4 : %d\n", s);
        printf(" Subject 5 : %d\n", st);
        printf("---------------------------------------------\n");
        printf(" Total     : %d\n", total);
        printf(" Percentage: %f\n", percent);
        printf(" Grade     : %c\n", grade);
        printf("=============================================\n");

    return 0;
}
