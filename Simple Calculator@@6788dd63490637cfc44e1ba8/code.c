#include <stdio.h>
int main(){
    int num1, num2;
    char ch;
    scanf("%d %d %c", &num1, &num2, &ch);
    
    if(ch=='+'){
        printf("%d", num1+num2);
    }
    else if(ch=='-'){
        printf("%d", num1-num2);
    }
    else if(ch=='*'){
        printf("%d", num1*num2);
    }
    else if(ch=='/'){
        printf("%d", num1/num2);
    }
    else{
        printf("Invalid input");
    }
    return 0;

}