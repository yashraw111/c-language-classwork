#include <stdio.h>

int main() {
    int size,Sum=0;
    float Avarage;

    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size]; 

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        Sum += a[i];
    }
    Avarage = Sum/size;
    printf("Avarage of Array %f",Avarage);
    return 0;
}
