#include<stdio.h>
// int traverse(int array[],int n);
void traverse(int array[],int n){
     int k=0;
     while(k<=n){
        printf("enter the values of array:");
        scanf("%d",&array[k]);
        k++;
     }
    };

    void print(int array[],int n){
       int k=0;
       while(k<=n){
        printf("\n%d",array[k]);
        k++;
       }
    }

int main(){
    int array[20],n;
    printf("entre the length of array: ");
    scanf("%d",&n);
    if(n>20){
        printf("it is not valid\n");
        return  0;
    }
    traverse(array,n);
    printf("the final array iis:");

    print(array,n);

    return 0;
}