#include<stdio.h>

int main(){
    int a ,b;
    printf("Enter first number =");
    scanf("%d",&a);
    printf("Enter second number =");
    scanf("%d",&b);

    printf("Addition of %d and %d is %d\n", a, b, a + b);
    printf("Subtraction of %d and %d is %d\n", a, b, a - b);
    printf("Multiplication of %d and %d is %d\n", a, b, a * b);
    printf("Division of %d and %d is %d\n", a, b, a / b);
    printf("Modulo of %d and %d is %d\n", a, b, a % b);
    return 0;
}