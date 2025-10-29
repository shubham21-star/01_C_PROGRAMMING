#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, sum = 0, rem;
    scanf("%d", &n);

    while(n > 0) {
        rem = n % 10;   // extract last digit
        sum += rem;     // add it to sum
        n = n / 10;     // remove last digit
    }

    printf("%d", sum);
    return 0;
}
