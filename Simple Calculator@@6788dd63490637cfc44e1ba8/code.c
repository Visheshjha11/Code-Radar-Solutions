#include <stdio.h>

int main() {
    int num1, num2;
    char ch;
    
    // Taking input properly
    scanf("%d %d", &num1, &num2);
    getchar();  // Consume leftover newline character
    scanf("%c", &ch);

    // Checking and performing operations
    if (ch == '+') {
        printf("%d", num1 + num2);
    } 
    else if (ch == '-') {
        printf("%d", num1 - num2);
    } 
    else if (ch == '*') {
        printf("%d", num1 * num2);
    } 
    else if (ch == '/') {
        if (num2 == 0) {
            printf("Error: Division by zero");
        } else {
            printf("%d", num1 / num2);
        }
    } 
    else {
        printf("Invalid input");
    }
    
    return 0;
}
