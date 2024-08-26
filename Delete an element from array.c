//Delete an element from the array
#include <stdio.h>

int main() {
    int n, i, pos;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &pos);
    if(pos < 1 || pos > n) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", n);
    } else {
        for(i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        printf("Array after deletion: \n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
