#include <stdio.h>

int main() {
    int Factorial = 5, result = 1;

    while (Factorial > 0) {
        printf("\nFactorial at step: %d", Factorial);
        result *= Factorial;
        Factorial--;
        printf("\nIntermediate result: %d", result);
    }

    printf("\nFinal Factorial: %d", result);

    return 0;
}
