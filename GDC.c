#include<stdio.h>
int gdc(int a,int b) {
    int gdc1=1, i;
    for (i = 1; i <= a && i <=b; ++i) {
        if (a % i == 0 && b % i == 0) {
            gdc1 = i;
        }
    }

 return gdc1;
}
int main(){
    int x,y;
    printf("Enter the first number:");
    scanf("%d",&x);
    printf("Enter the second number:");
    scanf("%d",&y);
   int result = gdc(x,y);
    printf("The GCD of %d and %d is: %d\n", x, y, result);
}