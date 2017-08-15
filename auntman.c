#include <stdio.h>

int main()
{
    long N, i, count = 0;
    int M, j;

    scanf("%li %i", &N, &M);

    char c[N][M + 1];

    for (i = 0; i < N; ++i)
    {
        scanf("%s", &c[i][0]);
    }

    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < M; ++j)
        {
            // แถวที่ i ตัวที่ j
            if (c[i][j] == 46)
            {
                continue;
            }

            if (c[i][j] == 43)
            {
                c[i + 1][j] = 46;
                c[i - 1][j] = 46;
                c[i][j + 1] = 46;
                c[i][j - 1] = 46;

                c[i][j] = 46;
            }

            if (c[i][j] == 120)
            {
                c[i + 1][j + 1] = 46;
                c[i + 2][j + 2] = 46;
                c[i - 1][j - 1] = 46;
                c[i - 2][j - 2] = 46;

                c[i - 1][j + 1] = 46;
                c[i - 2][j + 2] = 46;
                c[i + 1][j - 1] = 46;
                c[i + 2][j - 2] = 46;

                c[i][j] = 46;
            }
        }
    }

    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < M; ++j)
        {
            if (c[i][j] == 65)
            {
                count++;
            }
        }
    }

    printf("%li\n", count);

    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < M; ++j)
        {
            printf("%c", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}