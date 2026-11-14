#include <stdio.h>

int main()
{
    int a[10][10];
    int i, j, n;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Upper Matrix:\n");

    for(i = 0; i < n; i++){
         printf("|");
        for(j = 0; j < n; j++){
            if(i <= j){
                printf(" %-4d ", a[i][j]);
            }
            else{
                printf("      ");
            }
        }
        printf(" |\n");
    }
}