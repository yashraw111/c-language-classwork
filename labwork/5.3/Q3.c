#include<stdio.h>

int main(){
    int score;
    int grade;

    printf("Enter your score :");
    scanf("%d",score);

    if( score >=90){
        grade='A';
    };

    printf("grade %c",grade);
}