#include <stdio.h>

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if(j%2==1){
                
                printf("1");
            }
            else{
                printf("0");

            }
        }
        printf("\n");
    }
}