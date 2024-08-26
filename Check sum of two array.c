//Check sum of two different array is same or not
#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the size of two the array:");
	scanf("%d",&n);
	int arr1[n],arr2[n];
	int sum1=0,sum2=0;
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
	sum1=sum1+arr1[i];
	sum2=sum2+arr2[i];
}
if(sum1==sum2){
	printf("The sum of two array element is same. that is %d",sum1);
	
}else{
	printf("The sum of two arrray element is not same. That is %d and %d ",sum1,sum2);
	
}
}
