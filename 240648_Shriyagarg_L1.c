// 240648_shriyagarg_l1
//Given an array and an element x, find the index of the first occurrence of x in the array or return -1 if it doesn't exist. The time complexity is O(n).

#include <stdio.h>

// Function to find the first occurrence of x in arr[]
int findFirstOccurrence(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    int n, x;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &x);

    int index = findFirstOccurrence(arr, n, x);

    if (index == -1) {
        printf("Element not found in array.\n");
    } else {
        printf("The element is present at index %d.\n", index);
    }

    return 0;
}
