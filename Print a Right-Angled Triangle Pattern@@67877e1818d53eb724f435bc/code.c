#include <stdio.h>
pattern_triangle(int n){
    for(int i= 1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n")
    }
}
int main(){
    scanf("%d", &n);
    pattern_triangle(n);
    return 0;
}