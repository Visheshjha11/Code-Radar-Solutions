#include <stdiio.h>
int main(){
    int num1, num2, and_operator;
    scanf("%d %d", num1, num2);

    and_operator = num1 & num2;

    printf("%d", and_operator);
    return 0;
}