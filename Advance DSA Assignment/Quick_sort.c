#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int Position(int elements[], int left, int right)
{
    int loc = left, flag;

    // Place the left most element in the correct position
    while (left < right)
    {
        while (elements[loc] < elements[right])
            right--;

        swap(&elements[loc], &elements[right]);
        loc = right;

        while (elements[left] < elements[loc])
            left++;

        swap(&elements[loc], &elements[left]);
        loc = left;
    }
    return loc;
}

void Quick_sort(int elements[], int left, int right)
{
    if (left < right)
    {
        int loc = Position(elements, left, right);

        for (int i = 0; i < right + 1; i++)
            printf("%d ", elements[i]);
        printf("\n");

        Quick_sort(elements, left, loc - 1);
        Quick_sort(elements, loc + 1, right);
    }
}

int main()
{
    int data_set[] = {27, 15, 39, 21, 28, 70};
    int size = sizeof(data_set) / sizeof(int);
    Quick_sort(data_set, 0, size - 1);
    printf("The data set after sorting:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", data_set[i]);
    return 0;
}
