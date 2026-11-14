#include <stdio.h>

void main()
{
    int a[5][5];
    int i,r,c,j;

    printf("Enter number of rows:\n");
    scanf("%d", &r);
    printf("Enter number of columns:\n");
    scanf("%d", &c);

    printf("Enter elements of array:\n");
    for(i = 0; i < r; i++){
         for(j = 0; j < c; j++){ 
            scanf("%d",&a[i][j]);
     } 
        }
   
     printf("matrix is :\n");
     for(i = 0; i < r; i++){
         for(j = 0; j < c; j++){ 
            printf("| %-2d ",a[i][j]);
     } 
       printf("|\n");
     }
    }