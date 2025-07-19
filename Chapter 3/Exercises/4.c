#include <stdio.h>

int main() {
    int i, j;
    float x;

    printf("Enter values (like: 10.3 5 6): ");
    scanf("%d%f%d", &i, &x, &j);

    printf("i = %d\n", i);
    printf("x = %f\n", x);
    printf("j = %d\n", j);

    return 0;
}

