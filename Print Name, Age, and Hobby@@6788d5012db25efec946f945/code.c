#include <stdio.h>
int main(){
    char str1[100];
    int num;
    char str3[100];

    scanf("%99s %d %99s", &str1, &num, &str3);

    printf("Name: %s\n", str1);
    printf("Age: %d\n", num);
    printf("Age: %s\n", str3);
    return 0;
}