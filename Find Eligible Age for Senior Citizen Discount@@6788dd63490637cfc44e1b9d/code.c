#include <stdio.h>
int main(){
    int year;
    scanf("%d", &year);

    if(year>=60){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}