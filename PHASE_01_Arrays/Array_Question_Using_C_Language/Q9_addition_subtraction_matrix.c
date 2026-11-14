#include <stdio.h>

 int main()
{
    int a[10][10], b[10][10], d[10][10], e[10][10];
    int i, r, c, j;

    printf("Enter number of rows and columns:\n");
    scanf("%d%d", &r, &c);

    printf("Enter elements of first array:\n");

    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second array:\n");

    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            d[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Addition of two arrays:\n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("| %-2d ", d[i][j]);
        }
        printf("|\n");
    }

    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            e[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("Subtraction of two arrays:\n");

    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("| %-2d ", e[i][j]);
        }
        printf("|\n");
    }
}