#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("=== Scientific Calculator ===\n");

    do {
        printf("\nChoose operation:\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Power (x^y)\n");
        printf("6. Square Root (√x)\n");
        printf("7. Sine (sin x)\n");
        printf("8. Cosine (cos x)\n");
        printf("9. Tangent (tan x)\n");
        printf("10. Log (log10 x)\n");
        printf("11. Natural Log (ln x)\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result = %.2lf\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result = %.2lf\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result = %.2lf\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if(num2 != 0)
                    printf("Result = %.2lf\n", num1 / num2);
                else
                    printf("Error! Division by zero.\n");
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                result = pow(num1, num2);
                printf("Result = %.2lf\n", result);
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if(num1 >= 0)
                    printf("Result = %.2lf\n", sqrt(num1));
                else
                    printf("Error! Negative number.\n");
                break;

            case 7:
                printf("Enter angle in radians: ");
                scanf("%lf", &num1);
                printf("Result = %.2lf\n", sin(num1));
                break;

            case 8:
                printf("Enter angle in radians: ");
                scanf("%lf", &num1);
                printf("Result = %.2lf\n", cos(num1));
                break;

            case 9:
                printf("Enter angle in radians: ");
                scanf("%lf", &num1);
                printf("Result = %.2lf\n", tan(num1));
                break;

            case 10:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if(num1 > 0)
                    printf("Result = %.2lf\n", log10(num1));
                else
                    printf("Error! Invalid input.\n");
                break;

            case 11:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if(num1 > 0)
                    printf("Result = %.2lf\n", log(num1));
                else
                    printf("Error! Invalid input.\n");
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 0);

    return 0;
}