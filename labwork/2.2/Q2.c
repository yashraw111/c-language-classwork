// Write a Program to find the area of a square.

#include<stdio.h>

int main(){

    float length;
    printf("Enter the radius of the circle =");
    scanf("%f",&length);

    const float PI = 3.1416;

    printf("the area of length%f is : %f",length,length*length);
    return 0;
}