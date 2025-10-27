#include <stdio.h>
int main ()
{
    // using only if statements to check multiple conditions
    // without using logical operatorss
    char user_id;
    int password, age, grade;
    printf("Enter your user id & password: \n");
    scanf(" %c", &user_id); 
    scanf("%d", &password);

    printf("Enter your age: \n");
    scanf("%d", &age);

    printf("Enter your grade: \n");
    scanf("%d", &grade);

    if (user_id == 'a') 
    {
        if (password == 1234) 
        {
            if (age > 18)
            {
                if (grade > 90)
                {
                    printf("You are suitable candidate\n");
                }
                if (grade <= 90)
                {
                    printf("You are not suitable candidate\n");
                }
            }
            if (age <= 18) 
            {
                printf("You are not eligible (below 18)\n");
            }
        }
    }    
    if (password != 1234) 
        {
            printf("Incorrect Password! Login Failed.\n");
        }
    
    if (user_id != 'a') 
        {
            printf("Invalid User ID! Login Failed.\n");
        }

    return 0;
}
