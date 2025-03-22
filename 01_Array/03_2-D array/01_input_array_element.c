#include<stdio.h>
int main(){
    int a[20][20];
    int n,m;
    printf("enter the rows of matrix:");
    scanf("%d",&n);
    printf("enter the columns of matrix:");
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("enter the element of %d row and %d column:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("the matrix is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}