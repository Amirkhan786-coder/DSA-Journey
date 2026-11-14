#include <stdio.h>

void main() {
    int a[100],b[100],c[200];
    int i,n1,n2,j;
    printf("Enter size of first array:\n");
    scanf("%d",&n1);
    
    printf("Enter %d elements of array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter size of second array:\n");
    scanf("%d",&n2);
    
    printf("Enter %d elements of array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n1; i++) {
      c[i] = a[i];
    }
    for(j = 0; j < n2; j++) {
      c[n1+j] = b[j];
    }
    printf("\nConcatenated Array:\n");

for(i = 0; i < n1 + n2; i++)
{
    printf("| %-2d ", c[i]);
}
printf("|\n");

}