#include <stdio.h>

int main() {
    float radius, perimeter;
    const float PI = 3.1416; 
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("The perimeter of the circle with radius %.2f is: %.2f\n", radius, 2 * PI * radius);
    return 0;
}
