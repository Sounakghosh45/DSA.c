#include<stdio.h>
int main(){
   int a[]={10,20,30,40,50};
   int *p=&a[0];
   p=a;
   printf("%d",*(p+1));
    printf("%d",*p);
}