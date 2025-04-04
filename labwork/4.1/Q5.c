
// Write a Program to Swap two variables without using a third variable.
#include<stdio.h>

int main(){
    int a, b;

    printf("Enter the first number a: ");
    scanf("%d", &a);
    printf("Enter the second number b: ");
    scanf("%d", &b);
     
    a = a+b;
    b= a-b;
    a=a-b;

    printf("value a =%d",a);
    printf("\nvalue b =%d",b);
}