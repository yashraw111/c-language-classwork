#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter the rate of interest per annum: ");
    scanf("%f", &rate);
    
    printf("Enter the time in months: ");
    scanf("%f", &time);

    printf("The Simple Interest is: %.2f\n", (principal * rate * time) / (100 * 12));

    return 0;
}
