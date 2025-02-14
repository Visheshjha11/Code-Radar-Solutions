#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);

    if (num==2 || num==7 || num==13){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}