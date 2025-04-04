#include <stdio.h>

int main() {
    int FV, SV, TV, FoV;  

    printf("Enter the first value: ");
    scanf("%d", &FV);
    printf("Enter the second value: ");
    scanf("%d", &SV);
    printf("Enter the third value: ");
    scanf("%d", &TV);
    printf("Enter the fourth value: ");
    scanf("%d", &FoV);

    if (FV > SV) {
        if (FV > TV) {
            if (FV > FoV) {
                printf("Max value is %d\n", FV);
            } else {
                printf("Max value is %d\n", FoV);
            }
        } else {
            if (TV > FoV) {
                printf("Max value is %d\n", TV);
            } else {
                printf("Max value is %d\n", FoV);
            }
        }
    } else {
        if (SV > TV) {
            if (SV > FoV) {
                printf("Max value is %d\n", SV);
            } else {
                printf("Max value is %d\n", FoV);
            }
        } else {
            if (TV > FoV) {
                printf("Max value is %d\n", TV);
            } else {
                printf("Max value is %d\n", FoV);
            }
        }
    }

    return 0;
}
