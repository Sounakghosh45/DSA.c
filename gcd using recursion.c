#include<stdio.h>
int gcd(int a,int b) {
    if(b%a==0){
        return a;
        }else{
        int r=b%a;
        gcd(r,a);
    }


}
int main(){
    int x,y;
    printf("Enter the first number:");
    scanf("%d",&x);
    printf("Enter the second number:");
    scanf("%d",&y);
   int result = gcd(x,y);
    printf("The GCD of %d and %d is: %d\n", x, y, result);
}