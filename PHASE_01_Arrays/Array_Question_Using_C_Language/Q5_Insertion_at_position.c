#include <stdio.h>

void main() 
{
    int a[200];
    int i,n,num,pos;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    
    printf("Enter %d elements of array:\n", n);
for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to be inserted:\n");
    scanf("%d",&num);
    printf("Enter the position to insert:\n");
    scanf("%d",&pos);

for(i = n; i>=pos; i--) {
      a[i] = a[i-1];
    }
    a[pos-1]=num;
    n++;
    printf("\nArray after insertion:\n");

for(i = 0; i < n; i++)
{
    printf("| %-2d ", a[i]);
}
printf("|\n");
}