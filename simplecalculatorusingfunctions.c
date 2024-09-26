#include <stdio.h>


int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
 void displayResult(float result);


int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0; 
    }
}


 void displayResult(float result) {
    printf("Result: %.2f\n", result);
}


void performOperation(int a, int b, char op) {
    float result;

    switch (op) {
        case '+':
            result = add(a, b);
            displayResult(result);
            break;
        case '-':
            result = subtract(a, b);
            displayResult(result);
            break;
        case '*':
            result = multiply(a, b);
            displayResult(result);
            break;
        case '/':
            result = divide(a, b);
            displayResult(result);
            break;
        default:
            printf("Error: Invalid operator!\n");
    }
}


int main() {
    int a, b;
    char op;

    printf("Simple Calculator\n");
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op); 

    performOperation(a, b, op);

    return 0;
}
