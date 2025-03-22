#include <stdio.h>
int main()
{
	int i, a[10], max, max2;
	for (i=0;i<4;i++){
	    scanf("%d", &a[i]);
	}
	i=0;
	max=a[i];
	max2=a[i];
	for (i=0; i<4;i++){
	    if (a[i] > max){
	        if (max != max2 && max2<max){
	            max2=max;

	        }
	        max=a[i];
	    }
	}
	printf("Max: %d, 2nd Max: %d", max, max2);
}