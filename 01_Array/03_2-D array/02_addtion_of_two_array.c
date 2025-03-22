#include <stdio.h>
int main() {
    
    int a[20][20],b[20][20],c[20][20];
    
    int n,m;
    printf("enter the rows of matrix1:");
    scanf("%d", &n);
    printf("enter the columns of matrix1:");
    scanf("%d", &m);

    
    // int a[n][m], b[n][m], c[n][m];
    
    printf("enter the element of mAtrix1:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
     printf("enter the rows of matrix1:");
    scanf("%d", &n);
    printf("enter the columns of matrix1:");
    scanf("%d", &m);

     
    printf("enter the element of matrix2:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }

    // printf("the sum of two matrix:");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}