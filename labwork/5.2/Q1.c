#include<stdio.h>

int main(){
    int FV,SV,TV;

    printf("Enter the first value: ");
    scanf("%d",&FV);
    printf("Enter the first value: ");
    scanf("%d",&SV);
    printf("Enter the first value: ");
    scanf("%d",&TV);

    if(FV < SV){
        if(FV < TV){
            printf("mini value is %d",FV);
        }
        else{
            printf("mini value is %d",TV);
        }

    }
    else{
       if(SV<TV){
        printf("mini value is %d",SV);

       }
       else{
        printf("mini value is %d",TV);
       }
    }
    return 0;


}