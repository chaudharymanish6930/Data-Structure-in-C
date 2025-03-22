#include <stdio.h>

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int current = arr[i];
        int previous = i - 1;

        while (previous >= 0 && arr[previous] > current) {
            arr[previous+1] = arr[previous];
            previous = previous - 1;
        }

        arr[previous + 1] = current;
    } 
    // for(int i=1;i<size;i++){
    //     int current=i;
    //     int previous=i-1;
    //     while(previous>=0 && arr[previous]>arr[current]){
    //         int temp=arr[previous];
    //         arr[previous]=arr[current];
    //         arr[current]=temp;
    //         current=previous;
    //         previous--;
    //     }
    // }
    // int j,key;
    // for(int i=0;i<size;i++){
    //     key=arr[i];
    //     j=i-1;

    //     while(j>=0 && arr[j]>key){
    //         arr[j+1]=arr[j];
    //         j=j-1;
    //     }
    //     arr[j+1]=key;
    // }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size, arr[25];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, size);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}