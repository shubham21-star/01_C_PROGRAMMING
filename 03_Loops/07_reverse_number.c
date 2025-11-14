#include <stdio.h>
int main() {
    int n, rev = 0, rem,temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp=n;
    while(n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    printf("Reversed number = %d\n", rev);
    if(temp==rev){
        printf("the number %d is pallindrom, %d",temp,rev);
    }else{
        printf("the number is not pallindrom")
    }
    return 0;
}
