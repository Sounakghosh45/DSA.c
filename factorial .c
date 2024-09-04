#include<stdio.h>

    int fact(int a) {
        if (a == 1) {
            return 1;
        } else {
            return a * fact(a - 1);
        }
    }
    int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);

    printf("%d",fact(n));
}