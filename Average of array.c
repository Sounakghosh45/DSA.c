//Find the average of array elements
#include<stdio.h>
int main(){
	int n,i;
	float sum=0;
	printf("Enter the size of  the array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter element no %d:",i+1);
	 scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		sum=sum+arr[i];
	}
	float avg;
	avg=sum/n;
	printf("The average is:%f",avg);
}
