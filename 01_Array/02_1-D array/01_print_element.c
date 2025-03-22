#include<stdio.h>
int main(){
    int i;
    int a[4]={1,2,3,4};
    printf("%d\n",a);    // both are same in this case.
    printf("%d\n",&a[0]);
    printf("%d ",a[0]);
    printf("%d ",a[1]);
    printf("%d ",a[2]);
    printf("%d ",a[3]);
    printf("%d",a[4]); // garbage value in it.
    return 0;
}