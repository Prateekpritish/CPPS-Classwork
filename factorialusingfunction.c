#include <stdio.h>


int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number;


    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factorial of %d is %d\n", number, factorial(number));

}
