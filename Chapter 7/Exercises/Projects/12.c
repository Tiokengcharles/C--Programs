#include <stdio.h>

int main()
{
    float value, num;
    char op;

    printf("Enter an expression: ");
    scanf("%f", &value);

    while (scanf(" %c%f", &op, &num) == 2) {
        if (op == '+')
            value += num;
        else if (op == '-')
            value -= num;
        else if (op == '*')
            value *= num;
        else if (op == '/')
            value /= num;
        else {
            printf("Unknown operator: %c\n", op);
            break;
        }
    }

    printf("Value of expression: %.2f\n", value);
    return 0;
}

