// Write a Program to evaluate the formula: (x + y)²

#include<stdio.h>

int main(){
    int x,y;
    printf("enter x value:");
    scanf("%d",&x);
    printf("enter y value:");
    scanf("%d",&y);

    int c =x-y ;

    printf("The result of (%d + %d)² is: %d\n", x, y, c*c);

}