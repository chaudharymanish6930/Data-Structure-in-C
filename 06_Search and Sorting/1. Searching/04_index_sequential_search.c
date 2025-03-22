#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int key;
    int index;
} IndexTable;

int indexSequentialSearch(int arr[], IndexTable indexTable[], int indexSize, int size, int target) {
    int i;
    for (i = 0; i < indexSize; i++) {
        if (indexTable[i].key >= target) {
            break;
        }
    }

    if (i == 0) {
        return -1;
    }

    int start = indexTable[i - 1].index;
    int end = (i < indexSize) ? indexTable[i].index : size;

    for (int j = start; j < end; j++) {
        if (arr[j] == target) {
            return j;
        }
    }

    return -1;
}

int main() { 
    int arr[25],size, indexSize, target;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of elements in the index table: ");
    scanf("%d", &indexSize);

    IndexTable indexTable[indexSize];
    printf("Enter the elements of the index table (key and index):\n");
    for (int i = 0; i < indexSize; i++) {
        scanf("%d %d", &indexTable[i].key, &indexTable[i].index);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = indexSequentialSearch(arr, indexTable, indexSize, size, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}