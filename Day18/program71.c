#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; 

        if (arr[mid] == target)
            return mid; 
        
        if (arr[mid] < target)
            low = mid + 1; 
        else
            high = mid - 1;
    }
    return -1; 
}

int main() {
    int data[] = {10, 23, 45, 70, 88, 99}; 
    int n = sizeof(data) / sizeof(data[0]);
    int target = 70;

    int result = binarySearch(data, n, target);

    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found.\n");

    return 0;
}