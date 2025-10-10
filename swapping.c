#include  <stdio.h>
int main()
{
    int a, b, temp;
        printf("Enter two numbers: \n");
        scanf("%d %d", &a, &b);
        printf("Before swapping: a = %d, b = %d\n", a, b);
        // Swapping using a temporary variable
            temp = a;
            a = b;
            b = temp;
        printf("After swapping: a = %d, b = %d\n", a, b);

        // swapping without a temporary variable
            a = a + b;
            b = a - b;
            a = a - b;
        printf("After swapping without a temporary variable: a = %d, b = %d\n", a, b);

    //     check if two numbers are equal or not
    int c, d;
        printf("Enter two numbers to check if they are equal or not: \n");  
        scanf("%d %d", &c, &d);

            if (c == d)
            {
                printf("The two numbers are equal.\n");
            }
            if (c != d)
            {
                printf("The two numbers are not equal.\n");
            }
    // check the greater value with 3 variable
    int j,k,l;
    printf("Enter three numbers to check the greatest among them: \n");
    scanf("%d %d %d", &j, &k, &l);

        if (j >= k && j >= l)
        {
            printf("The greatest number is: %d\n", j);
        }
        else if (k >= j && k >= l)
        {
            printf("The greatest number is: %d\n", k);
        }
        else 
        {
            printf("The greatest number is: %d\n", l);
        }

    // check the smallest value with 3 variable without locgical operator
    int i,o,p;
    printf("Enter three numbers to check the smallest among them: \n");
    scanf("%d %d %d", &i, &o, &p);

        if (i <= o)
        {
            if (i <= p)
            {
                printf("The smallest number is: %d\n", i);
            }
            else
            {
                printf("The smallest number is: %d\n", p);
            }
        }
        else
        {
            if (o <= p)
            {
                printf("The smallest number is: %d\n", o);
            }
            else
            {
                printf("The smallest number is: %d\n", p);
            }
        }
        
    return 0;
}