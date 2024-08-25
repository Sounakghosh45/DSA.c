//Find the largest element of an array
#include<stdio.h>
int main(){
	int n,i;
	int sum=0;
	printf("Enter the size of  the array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter element no %d:",i+1);
	 scanf("%d",&arr[i]);
	}
	int max=0;
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
		printf("The largest element of the array is :%d\n",max);
	}
