#include <stdio.h>

void main()
{
    int a[200];
    int i, n;

    printf("Enter size of array:\n");
    scanf("%d", &n);
    printf("Enter %d elements of array:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("\nEven numbers:\n");
    for(i = 0; i < n; i++){
        if(a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }

    printf("\n\nOdd numbers:\n");
    for(i = 0; i < n; i++){
        if(a[i] % 2 != 0)
        {
            printf("%d ", a[i]);
        }
    }
}