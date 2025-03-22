#include <stdio.h>

int interpolationSearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high && target >= arr[low] && target <= arr[high]) {
        if (low == high) {
            if (arr[low] == target) return low;
            return -1;
        }

        // Probing the position with keeping uniform distribution in mind.
        int pos = low + (((double)(high - low) / (arr[high] - arr[low])) * (target - arr[low]));

        // Condition of target found
        if (arr[pos] == target) {
            return pos;
        }

        // If target is larger, target is in upper part
        if (arr[pos] < target) {
            low = pos + 1;
        }
        // If target is smaller, target is in lower part
        else {
            high = pos - 1;
        }
    }
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

    int result = interpolationSearch(arr, size, target);

    if (result != -1) {
        printf("Element found is %d at index %d\n", arr[result], result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}