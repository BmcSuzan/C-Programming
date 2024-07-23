#include <stdio.h>
int main()
{
    int i, a = 1, b = 0, c = 0;
    int num;
    printf("Enter the nth term : ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("%d\t", c);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}