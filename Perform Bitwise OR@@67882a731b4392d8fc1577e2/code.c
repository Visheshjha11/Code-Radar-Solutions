#include <stdio.h>
int main(){
    int num1, num2, and_operator, or_operator;
    scanf("%d %d", &num1, num2);

    or_operator = num1 | num2;

    printf("%d", or_operator);
    return 0;

}