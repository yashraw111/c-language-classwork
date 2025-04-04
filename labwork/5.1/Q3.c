#include<stdio.h>
int main(){
    int english , Science,maths,result;

    printf("Enter a marks of the english");
    scanf("%d",&english);

    printf("Enter a marks of the science ");
    scanf("%d",&Science);
    printf("Enter a marks of the maths");
    scanf("%d",&maths);
    result = (english+Science+maths) * 100/300;

    printf("average marks is : %d",result);

   
}