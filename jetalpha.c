#include <stdio.h>

int main()
{
    int M, N, i, j, c = 65;
    scanf("%i %i", &M, &N);

    // 65 = A
    for (i = 1; i <= M; ++i)
    {
        for (j = 1; j <= N; ++j)
        {
            if (c == 91)
            {
                c = 65;
            }
            printf("%c", c);
            c++;
        }
        printf("\n");
    }

    return 0;
}