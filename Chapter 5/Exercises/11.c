#include <stdio.h>

int main() {
    int area_code;

    // Tells the user to enter an area code
    printf("Enter the area code: ");
    scanf("%d", &area_code);

    switch (area_code) {
        case 229:
            printf("Major city: Albany\n");
            break;
        case 404:
            printf("Major city: Atlanta\n");
            break;
        case 478:
            printf("Major city: Macon\n");
            break;
        case 706:
            printf("Major city: Augusta\n");
            break;
        case 762:
            printf("Major city: Columbus\n");
            break;
        case 770:
            printf("Major city: Atlanta\n");
            break;
        case 912:
            printf("Major city: Savannah\n");
            break;
        default:
            printf("Area code not found.\n");
            break;
    }

    return 0;
}

