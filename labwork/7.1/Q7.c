#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 0; i < rows; i++) {
        for (int j = i; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
