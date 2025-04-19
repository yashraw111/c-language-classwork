#include<stdio.h>

int main(){
    int size ;
    printf("Enter array length :");
    scanf("%d",&size);

    int A[size],B[size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("B[%d] = ", i);
        scanf("%d", &B[i]);
    }

    printf("New Array C :");
    for (int i = 0; i < size; i++) {
        printf(" %d ",A[i]+B[i]);
    }
}