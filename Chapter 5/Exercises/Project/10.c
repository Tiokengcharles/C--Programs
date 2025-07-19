#include <stdio.h>

int main() {
    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    // Check for valid grades
    if (grade > 100) {
        printf("Error: Grade cannot be greater than 100.\n");
        return 1;
    }

    // Determine the letter grade using switch
    char letterGrade;
    switch (grade / 10) {
        case 10: // Treat 100 as 'A'
        case 9:
            letterGrade = 'A';
            break;
        case 8:
            letterGrade = 'B';
            break;
        case 7:
            letterGrade = 'C';
            break;
        case 6:
            letterGrade = 'D';
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            letterGrade = 'F';
            break;
        default:
            printf("Error: Invalid grade.\n");
            return 1;
    }

    // Display the letter grade
    printf("Letter grade: %c\n", letterGrade);
    return 0;
}

