#include <stdio.h>

int findLargest(int a, int b, int c);


int findLargest(int a, int b, int c) {
    int largest = a; 

    if (b > largest) {
        largest = b; 
    }
    if (c > largest) {
        largest = c; 
    }

    return largest; 
}


int main() {
    int num1, num2, num3;

    
    printf("Enter three numbers:\n");
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);
    printf("Number 3: ");
    scanf("%d", &num3);

    
    int largest = findLargest(num1, num2, num3);


    printf("The largest number is: %d\n", largest);

}
