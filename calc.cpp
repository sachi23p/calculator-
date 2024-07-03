#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void add();
void subtract();
void multiply();
void divide();

int main() {
    char operator;
    int condition = 1;

    while(condition) {
        printf("Select an operation to perform (+, -, *, /) or q to quit: ");
        scanf(" %c", &operator);

        switch(operator) {
            case '+':
                add();
                break;
            case '-':
                subtract();
                break;
            case '*':
                multiply();
                break;
            case '/':
                divide();
                break;
            case 'q':
                condition = 0;
                break;
            default:
                printf("Invalid operation. Please try again.\n");
        }
    }

    printf("Calculator exited.\n");
    return 0;
}

void add() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %lf\n", a + b);
}

void subtract() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %lf\n", a - b);
}

void multiply() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %lf\n", a * b);
}

void divide() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    if(b != 0)
        printf("Result: %lf\n", a / b);
    else
        printf("Error: Division by zero is not allowed.\n");
}

