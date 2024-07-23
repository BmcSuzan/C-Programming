#include <stdio.h>
int main()
{
    int num[5], i, j, temp;
    printf("Enter the 5 different numbers: ");
    // taking input
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
    // sorting the array
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5 - 1; j++)
        {
            if (num[i] < num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    int arrLength = sizeof(num) / sizeof(num[0]);
    printf("\nThe Smallest Number is %d and Largest number is %d", num[0], num[arrLength - 1]);
    return 0;
}