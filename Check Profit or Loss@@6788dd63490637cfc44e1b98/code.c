#include <stdio.h>
int main(){
    int cost_prize, selling_prize;
    scanf("%d", &cost_prize);
    scanf("%d", &selling_prize);

    if(selling_prize>cost_prize){
        printf("Profit");
    }
    else if(selling_prize<cost_prize){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}