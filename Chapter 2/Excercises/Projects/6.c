#include <stdio.h>

int main(void) {
    double x;
    
    printf("Enter a value for x: ");
    scanf("%lf", &x);
    
    // Using Horner's Rule to evaluate the polynomial
    double result = 3;
    result = result * x - 5; 
    result = result * x - 1;  
    result = result * x + 7;  
    result = result * x - 6;  

    printf("The value of the polynomial is: %.2f\n", result);

    return 0;
}

