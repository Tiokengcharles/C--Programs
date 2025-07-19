#include <stdio.h>

int main(void) {
    double x;
    
    printf("Enter a value for x: ");
    scanf("%lf", &x);
    
    // powers of x //
    double x2 = x * x;         
    double x3 = x2 * x;         
    double x4 = x3 * x;         
    double x5 = x4 * x;         
   
    double result = 3 * x5 + 2 * x4 - 5 * x3 - x2 + 7 * x - 6;
    printf("The value of the polynomial is: %.2f\n", result);

    return 0;
}

