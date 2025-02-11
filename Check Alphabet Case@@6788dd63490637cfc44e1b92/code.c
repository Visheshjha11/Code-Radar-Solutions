#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    
    if (ch>='A' && ch<='z'){
        printf("Uppercase");
    }
    else if(ch>='a' && ch<='z'){
        printf("Lowercase");
    }
    else{
        pritf("Invalid input");
    }
    return 0;
}