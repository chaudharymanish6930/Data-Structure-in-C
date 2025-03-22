#include<stdio.h>
int main(){
    int a[5];
    int sum=0,avg,i;
    for(i=0;i<5;i++){
        printf("enter the element:");
        scanf("%d",&a[i]);
    }
    printf("%d",a[i]);

    for(i=0;i<5;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    for(i=0;i<5;i++){
        sum=sum+a[i];
    }
    printf("the sum is: %d\n",sum);
    
    // print average value of the sum variable
    avg=sum/i;
    printf("the avgerage is :%d\n",avg);

    float avg1;
     avg1=sum/i;
    printf("the average in ponits:%f",avg1);
    return 0;
}