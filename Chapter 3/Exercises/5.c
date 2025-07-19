#include <stdio.h>

int main() {
    float x, y;
    int i;

    printf("Enter values (like: 12.3 45.6 789): ");
    scanf("%f%d%f", &x, &i, &y);

    printf("x = %f\n", x);
    printf("i = %d\n", i);
    printf("y = %f\n", y);

    return 0;
}

