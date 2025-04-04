#include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter the base =");
    scanf("%f", &base);
    
    printf("Enter the height =");
    scanf("%f", &height);
    printf("The area of the triangle is: %.2f\n", 0.5 * base * height);

    return 0;
}
