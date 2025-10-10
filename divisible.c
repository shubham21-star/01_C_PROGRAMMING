// WAP to check whether a number is divisible by 5 and 11 or not.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: \n");
    scanf("%d", &a);
    if ( (a% 5 == 0) && (a% 11 == 0))
    {
        printf("The number is divisible by 5 and 11.\n");
    }
    else
    {
        printf("The number is not divisible by 5 and 11.\n");
    }
    // check whether a number leap year or not
    int year;
    printf("Enter a year: \n");
    scanf("%d", &year);
    if ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) )
    {
        printf("The year is a leap year.\n");
    }
    else
    {
        printf("The year is not a leap year.\n");
    }
    // check whether a character is alphabet or not
    char s;
    printf("Enter a character: \n");
    scanf(" %c", &s);
    if ( (s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z') )
    {
        printf("The character is an alphabet.\n");
    }
    else
    {
        printf("The character is not an alphabet.\n");
    }
    // check whether a character is vowel or consonant
    char ch;
    printf("Enter a character: \n");
    scanf(" %c", &ch);
    if ( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
    {
        printf("The character is a vowel.\n");
    }
    else
    {
        printf("The character is a consonant.\n");
    }0
 .   return 0;
}
