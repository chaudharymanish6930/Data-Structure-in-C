#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (right + left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid;
        }

        // If target greater, ignore left half
        if (arr[mid] < target) {
            left = mid + 1;
            // right=mid-1;
        }
        // If target is smaller, ignore right half
        else if(arr[mid] > target) {
            left = mid + 1;
            // right = mid - 1;
        }
    }
    // Target is not present in array
    return -1;

}

int main() {
    int arr[25],size, target;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // int arr[size];

    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element found is %d at index %d\n", arr[result], result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}