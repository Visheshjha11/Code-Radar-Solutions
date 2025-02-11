#include <stdio.h>
int main(){
    int num1, num2, XOR_operator;
    scanf("%d %d", &num1, &num2);

    XOR_operator = num1 ^ num2;

    printf("%d", XOR_operator);
    return 0;
}