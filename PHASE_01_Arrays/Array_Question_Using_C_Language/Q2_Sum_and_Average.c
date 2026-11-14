#include <stdio.h>
void main(){
    int n,i=0,sum=0;
    float avg;
    printf("Enter the size of array:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements\n:",n);
    for(i;i<n;i++){
        scanf("%d",&arr[i]);
        sum +=arr[i];
    }
    avg = (float)sum/n;
    printf("The sum is :%d\n",sum);
    printf("The avg is :%.4f\n",avg);

}