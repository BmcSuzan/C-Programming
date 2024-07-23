#include <stdio.h>
int main()
{
    int num[5] = {5, 8, 9, 6, 3};
    int arrLength = sizeof(num) / sizeof(num[0]);
    int i, j, temp;
    // sorting the array
    for (i = 0; i < arrLength; i++)
    {
        for (j = 0; j < arrLength - 1; j++)
        {
            if (num[i] < num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    // printing the array
    for (i = 0; i < arrLength; i++)
    {
        printf("%d\t", num[i]);
    }

    return 0;
}