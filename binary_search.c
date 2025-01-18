
#include<stdio.h>
int main() {
    printf("Enter the Array elements in sorted order\n");
    int n;
    printf("Enter the size of  the array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element no %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    int search_element;
    printf("Enter search element:");
    scanf("%d", &search_element);
    int beg=0;
    int end=n-1;
    int count=0;
    while(beg<=end){
        int mid=(beg+end)/2;
        if(arr[mid]==search_element){
            printf("the element %d present in the array of index %d",search_element, mid);
            count++;
            break;
    }else if(arr[mid]>search_element){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
    if(count==0){
        printf("Element not found!!");
    }
    }