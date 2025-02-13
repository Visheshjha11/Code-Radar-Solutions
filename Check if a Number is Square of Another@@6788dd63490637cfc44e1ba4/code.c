#include <stdio.h>
int main(){
    int num1, num2, sq;
    scanf("%d %d", &num1, &num2);

    sq = num2 * num2;
    if(num1==sq){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}