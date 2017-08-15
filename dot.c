#include <stdio.h>

int main()
{
    unsigned long N, i, j, c = 0;
    scanf("%lu", &N);

    unsigned short X[N][2];

    for (i = 0; i < N; ++i)
    {
        scanf("%hu %hu", &X[i][0], &X[i][1]);

        for (j = 0; j < i; ++j)
        {
            if (X[j][0] == X[i][0] && X[j][1] == X[i][1])
            {
                c++;
                break;
            }
        }
    }

    printf("%lu", N - c);
    return 0;
}