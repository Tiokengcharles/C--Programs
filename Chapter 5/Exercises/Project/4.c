#include <stdio.h>

int main() {
    int windSpeed;

    printf("Enter wind speed (in knots): ");
    scanf("%d", &windSpeed);

    if (windSpeed < 1) {
        printf("Beaufort Scale: Calm\n");
    } else if (windSpeed >= 1 && windSpeed <= 3) {
        printf("Beaufort Scale: Light air\n");
    } else if (windSpeed >= 4 && windSpeed <= 27) {
        printf("Beaufort Scale: Breeze\n");
    } else if (windSpeed >= 28 && windSpeed <= 47) {
        printf("Beaufort Scale: Storm\n");
    } else {
        printf("Beaufort Scale: Hurricane\n");
    }

    return 0;
}

