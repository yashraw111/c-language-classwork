// Write a Program to find the area of a circle.

#include<stdio.h>

int main(){

    float radius , area;
    printf("Enter the radius of the circle =");
    scanf("%f",&radius);

    const float PI = 3.1416;

    printf("the area of circle with radius %.2f is : %.2f",radius,PI*radius*radius);
    return 0;
}