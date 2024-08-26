//Check element of two array are same or not
#include<stdio.h>
int main(){
	int n,i,count=0;
	printf("Enter the size of two the array:");
	scanf("%d",&n);
	int arr1[n],arr2[n];
	for(i=0;i<n;i++){
		printf("Enter first array element %d:",i+1);
	 scanf("%d",&arr1[i]);
	}
	printf("\n------------------------\n");
	for(i=0;i<n;i++){
		printf("Enter second array element %d:",i+1);
	 scanf("%d",&arr2[i]);
	}
	for(i=0;i<n;i++){
		if(arr1[i]==arr2[i]){
			count++;
		}else{
			printf("This two array are not equal");
			return 1;
		}
	}
	if(count==n){
		printf("This two array are same!\n");
	}
}
