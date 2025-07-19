#include <stdio.h>

int main(void) {
    double radius;

    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);
    
    double volume = (4.0 / 3.0) * 3.14159 * (radius * radius * radius);
    printf("The volume of the sphere is: %.2f\n", volume);

    return 0;
}

