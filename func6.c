#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

void main() {
    float num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (op) {
        case '+':
            result = add(num1, num2);
            printf("Result = %.2f\n", result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("Result = %.2f\n", result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("Result = %.2f\n", result);
            break;
        case '/':
            if (num2 == 0)
                printf("Error: Division by zero is not allowed.\n");
            else {
                result = divide(num1, num2);
                printf("Result = %.2f\n", result);
            }
            break;
        default:
            printf("Invalid operator.\n");
    }
}
