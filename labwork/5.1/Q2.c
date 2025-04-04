#include<stdio.h>
int main(){
    int Number;

    printf("Enter a value of the first number:");
    scanf("%d",&Number);
    if(Number > 0){
        printf("This number is positive");
    }
    else if(Number <0){
        printf("This number is Negative");
    }
    else{
        printf("this number is Natural");
    }
}