#include <stdio.h>
int main(){
    int num1, num2, num3, sum;
    double average;

    scanf("%d %d %d", num1, num2, num3);
    sum = num1+num2+num3;
    average = sum / 3.0;

    printf("Average: %.2f", average);
    return 0;
}