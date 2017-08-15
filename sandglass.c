#include <stdio.h>

int main()
{
    int n, i, j, k;
    scanf("%i", &n);

    if (n % 2 == 0)
    {
        printf("error");
        return 0;
    }

    for (i = n; i > -1; i = i - 2)
    {
        for (k = 1; k <= ((n - i) / 2); ++k)
        {
            printf(" ");
        }
        for (j = 1; j <= i; ++j)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 3; i <= n; i = i + 2)
    {
        for (k = 1; k <= ((n - i) / 2); ++k)
        {
            printf(" ");
        }
        for (j = 1; j <= i; ++j)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}