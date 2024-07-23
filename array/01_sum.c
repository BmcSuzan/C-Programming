#include <stdio.h>
int main()
{
    int arr[4] = {1, 2, 3, 4};
    int arrLength = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i <=arrLength-1 ; i++)
    {
        // printf("%d",arr[i]);
        sum = sum + arr[i];
    }

    printf("the sum is %d", sum);
    return 0;
}