#include <stdio.h>

void main()
{
    int num, digit;
    int frequency[10] = {0};

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num)
    {
        digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }

    printf("Digit Frequencies:\n");
    for (int i = 0; i < 10; i++)
        if (frequency[i] > 0)
            printf("%d occurs %d times\n", i, frequency[i]);
}
