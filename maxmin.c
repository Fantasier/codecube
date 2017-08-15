#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned long N, i;

    scanf("%lu", &N);

    long K, max = LONG_MIN, min = LONG_MAX;

    for (i = 0; i < N; ++i)
    {
        scanf("%li", &K);
        if (max <= K)
        {
            max = K;
        }
        if (min >= K)
        {
            min = K;
        }
    }

    printf("%li\n%li", max, min);

    return 0;
}