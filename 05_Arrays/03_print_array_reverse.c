  
#include <stdio.h>

    int main() {
    int a[5];
    
    printf("Enter the array:  ");

     for (int i = 0; i <5; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("Array elements in reverse order:\n");
     for (int i = 4; i>=0; i--) 
    {
        printf("%d ", a[i]);
    }    
    return 0;
}   