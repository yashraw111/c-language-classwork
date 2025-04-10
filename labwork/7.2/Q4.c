#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int space=1;space<=i;space++){
            printf(" ");
        }
        for(int j=5;j>=i;j--){
            // printf("%d",j);

            if(j%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
}