#include <stdio.h>
int main(){
    int num1, num2, sq;
    scanf("%d %d", &num1, &num2);

    sq = num1 * num1;
    if(sq%num2==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}