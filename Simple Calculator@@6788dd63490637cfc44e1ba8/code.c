#include <stdio.h>
int main(){
    int num1, num2;
    char ch;
    scanf("%d %d", &num1, &num2);
    getchar(); 
    scanf("%c", &ch);
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