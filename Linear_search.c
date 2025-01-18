
#include<stdio.h>
int main() {
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
    for (int i = 0; i < n; i++) {
        if (arr[i] == search_element) {
            printf("the element %d present in the array of index %d", search_element, i);
        }

    }
}
