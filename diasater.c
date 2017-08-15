#include <stdio.h>

int main()
{
    short N, i, j;

    scanf("%hu", &N);

    for (i = 1; i <= N; i = i + 2)
    {
        for (j = 1; j <= (N - i) / 2; ++j)
        {
            printf("-");
        }

        for (j = 1; j <= i; ++j)
        {
            printf("*");
        }

        for (j = 1; j <= (N - i) / 2; ++j)
        {
            printf("-");
        }

        printf("\n");
    }

    for (i = N - 2; i >= 1; i = i - 2)
    {
        for (j = 1; j <= (N - i) / 2; ++j)
        {
            printf("-");
        }

        for (j = 1; j <= i; ++j)
        {
            printf("*");
        }

        for (j = 1; j <= (N - i) / 2; ++j)
        {
            printf("-");
        }

        printf("\n");
    }

    return 0;
}