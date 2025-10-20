#include <stdio.h>
int main() {
    char user_id;
    int age, grade, password;

    printf("Enter your User ID : ");
    scanf(" %c", &user_id);

    printf("Enter your Password : ");
    scanf(" %d", &password);

    printf("Enter your Age: ");
    scanf("%d", &age);

    printf("Enter your Grade: ");
    scanf("%d", &grade);

    printf("\n========== LOGIN PROCESS START ==========\n\n");

    // Check User ID
    if (user_id == 'A') {
        printf("User ID Verified.\n");

        // Check Password
        if (password ==123) 
        {
            printf("Password Verified.\n");
            printf("Login Successful!\n");

            // Check Age
            if (age > 18) 
            {
                printf("Eligible for Student Login Check.\n");
            }

            if (age <= 18) 
            {
                printf("Not Eligible for Student Login.\n");
            }

            // Check Grade
            if (grade > 90) 
            {
                printf("You are a suitable candidate.\n");
            }
            
            if (grade <= 90) 
            {
                printf("You are NOT a suitable candidate.\n");
            }
        }

        if (password !=123) 
            {
                printf("Incorrect Password! Login Failed.\n");
            }
        if (user_id != 'A') 
            {
                printf("Invalid User ID! Login Failed.\n\n");
            }
        }
    printf("\n==========  LOGIN PROCESS END  ===========\n");
    return 0;
}
