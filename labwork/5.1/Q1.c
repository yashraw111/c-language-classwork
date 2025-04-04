#include<stdio.h>
int main(){
    int FV , SV;

    printf("Enter a value of the first number:");
    scanf("%d",&FV);

    printf("Enter a value of the first number:");
    scanf("%d",&SV);
    if(FV > SV){
        printf("minimum value is %d",SV);
    }
    else{
        printf("minimum value is %d",FV);

    }
}