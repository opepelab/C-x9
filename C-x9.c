#include <stdio.h>
int main(void){

    int i, b;
    scanf("%d",&b);
    
    for (i = 1; i <= 9; i++) {
        printf("%dの数字です\n", i*b);
    }
    return 0;
}
