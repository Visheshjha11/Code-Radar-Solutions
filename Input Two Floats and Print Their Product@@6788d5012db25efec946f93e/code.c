#include <stdio.h>

int main() {
  float num1, num2, product;

  scanf("%f %f", &num1, &num2);  // Corrected scanf format string

  product = num1 * num2;

  printf("Product: %.2f\n", product); //Keep the "%.2f" formatting here for the desired output

  return 0;
}
