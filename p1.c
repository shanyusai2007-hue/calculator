#include <stdio.h>
#include <math.h>

int main() {
    char operator;-
    double num1, num2, result;

    printf("Simple Calculator in C\n");
    printf("----------------------\n");
    printf("Enter an operator from the following:\n");
    printf("'+' for addition\n");
    printf("'-' for subtraction\n");
    printf("'*' for multiplication\n");
    printf("'/' for division\n");
    printf("'r' for square root\n");
    printf("'p' for power (x^y)\n");
    printf("Enter your choice: ");
    scanf(" %c", &operator); 

    switch (operator) {
        case '+':
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.1lf + %.1lf = %.1lf\n", num1, num2, result);
            break;
        case '-':
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.1lf - %.1lf = %.1lf\n", num1, num2, result);
            break;
        case '*':
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.1lf * %.1lf = %.1lf\n", num1, num2, result);
            break;
        case '/':
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.1lf / %.1lf = %.1lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 'r':
            printf("Enter a number to find its square root: ");
            scanf("%lf", &num1);
            if (num1 >= 0) {
                result = sqrt(num1);
                printf("Result: The square root of %.1lf is %.1lf\n", num1, result);
            } else {
                printf("Error: Cannot find the square root of a negative number.\n");
            }
            break;
        case 'p':
            printf("Enter the base and the exponent: ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("Result: %lf raised to the power of %.1lf is %.1lf\n", num1, num2, result);
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }


    return 0;

}
