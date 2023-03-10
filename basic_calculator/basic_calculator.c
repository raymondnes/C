#include <stdio.h>

/* Make a basic calculator
 * @functions - +, -, *, /
 * Returns - Always 0
 */

int main()
{
    double num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0)
            {
                printf("Error: Cannot divide by zero");
            }
            else
            {
                printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
            }
            break;
        default:
            printf("Error: Invalid operator");
    }

    return 0;
}
