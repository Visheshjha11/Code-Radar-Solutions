#include <stdio.h>

int main() {
    float a;

    printf("Enter a floating-point number: ");
    scanf("%f", &a);

    printf("You entered: %.2f\n", a);  // Print with 2 decimal places

    return 0;
}

