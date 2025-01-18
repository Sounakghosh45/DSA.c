#include<stdio.h>
int split(int arr[],int lb, int ub){
   int pivot=arr[lb];
  int start =lb;
  int end =ub;
   while(start<end){
       while(arr[start]<=pivot){
           start++;
       }
       while(arr[end]>pivot){
           end--;
       }
       if(start<end){
           int temp=arr[start];
           arr[start]=arr[end];
           arr[end]=temp;
       }
   }
    int temp=arr[lb];
    arr[lb]=arr[end];
    arr[end]=temp;
   return end;
}
int quicksort(int arr[], int lb,int ub){
    if(lb<ub){
        int loc= split(arr,lb,ub);
        quicksort(arr,lb,loc-1);
        quicksort(arr,loc+1,ub);
    }

}
int main() {
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
//    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter array element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    quicksort(arr, 0, n - 1);
    printf("Sorted array is:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}