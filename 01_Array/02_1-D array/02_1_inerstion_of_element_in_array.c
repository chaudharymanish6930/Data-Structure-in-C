#include<stdio.h>
#include<stdlib.h>
void insert(int array[],int n,int item,int location){
    for(int i=n;i>location;i--){
        array[i+1]=array[i];
    }
    array[location]=item;
}
// void insert(int array[], int n, int item, int location) {
//     for (int i = n; i > location; i--) {
//         array[i] = array[i - 1];
//     }
//     array[location] = item;
// }

int main(){ 
    int array[20],n, item, location,i;

    printf("enter the lenght of array:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("enter %d elements:",i+1);
        scanf("%d",&array[i]);
    }
    printf("entered the insert element:");
    scanf("%d",&item);

    printf("entered the loaction:");
    scanf("%d",&location);

    insert(array,n,item,location);

    printf("Array after insertion:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}