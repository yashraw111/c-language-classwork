#include <stdio.h>

int main() {
    int number;
    printf("Enter the Number");
    scanf("%d",&number);
    for (int i = 1; i <= number; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
