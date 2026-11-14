#include <stdio.h>

void main() 
{
    int a[200];
    int i,n,pos;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    
    printf("Enter %d elements of array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
       }
    printf("Enter the position to delete:\n");
    scanf("%d",&pos);

    for(i =pos-1; i<n-1; i++) {
      a[i] = a[i+1];
      }
    n--;
    printf("\nArray after deletion:\n");

    for(i = 0; i < n; i++){
    printf("| %-2d ", a[i]);
    }
    printf("|\n");
}