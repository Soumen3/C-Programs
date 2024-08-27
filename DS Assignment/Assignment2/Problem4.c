#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed!");
        exit(0);
    }
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", arr+i);

    printf("The entered elements are:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", *(arr+i));

    free(arr);
}
