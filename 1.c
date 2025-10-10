#include <stdio.h>
int main() {
    int a,b,c,d,s,m,sum,sum1;
    float e,f;
    // Print Hello, World!
    printf("Hello, World!");
    printf("\nhello world program\n");
    
    // Case 1: User input
        printf("Enter no. a :  ");
        scanf("%d", &a);
        printf("Enter no. b :  ");
        scanf("%d", &b);
        sum=a+b;
        printf("value of sum = %d\n",sum);

    // case 2: use only two variables
        //Optimazation
        printf("\nEnter no. s & m:    ");
        scanf("%d%d", &s,&m);

        printf("value of sum = %d",a+b);
        
        
    // case 2: predefined values
        //Optimazation
        c=5,d=10;
        e=5.0,f=10.0;
        printf("\nvalue of sum1 = %d",c+d);
        printf("\nvalue of subt = %d",c-d);
        printf("\nvalue of mult = %d",c*d);
        printf("\nvalue of divi = %f",e/f);

    //area of sqare
        int side,area;
        printf("\n\nEnter side of square :  ");
        scanf("%d", &side);
        area=side*side;
        printf("area of square = %d",area);
    //radius of circle
        float radius,area1;
        printf("\n\nEnter radius of circle :  ");
        scanf("%f", &radius);
        area1=3.14*radius*radius;
        printf("area of circle = %f",area1);
    return 0;
}
