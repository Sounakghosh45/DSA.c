//Copy array element form one array to another array 
#include<stdio.h>
int main(){
	int n,i;
	int sum=0;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int arr1[n],arr2[n];
	for(i=0;i<n;i++){
		printf("Enter array element %d:",i+1);
	 scanf("%d",&arr1[i]);
	}
		for(i=0;i<n;i++){
			arr2[i]=arr1[i];
		}
    printf("The copied array is:\n");
		for(i=0;i<n;i++){
		printf("%d  ",arr2[i]);
		}
	}
