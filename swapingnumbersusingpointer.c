#include<stdio.h>

void swap_numbers(int *pointer1 , int *pointer2)
{
    int temp;
    temp = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = temp;
}

int main()
{
    int num1 , num2 ;

    printf("Enter two numbers : \n");

    scanf("%d %d", &num1,&num2);

    printf("Numbers before swapped: num 1 = %d and num2 = %d\n",num1,num2);

    swap_numbers(&num1,&num2);

    printf("Numbers after swapped is : num1 = %d and num2 = %d",num1 ,num2);
}