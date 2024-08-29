//Sum of array elements
#include<stdio.h>
int main(){
	int n,i;
	int sum=0;
	printf("enter the size of  the array");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter array element :\n");
	 scanf("%d",&arr[i]);
	}
		for(i=0;i<n;i++){
			sum=sum+arr[i];
		}
		printf("The sum of array elemet is:%d",sum);
}
//hiii
