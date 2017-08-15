#include <stdio.h>

unsigned long gcd(unsigned long a, unsigned long b)
{
    if (a == b || a == 0)
    {
        return b;
    }

    if (b == 0)
    {
        return a;
    }

    if (a % b == 0)
    {
        return b;
    }

    if (b % a == 0)
    {
        return a;
    }

    while (1)
    {
        if (a > b)
        {
            if (a % b == 0)
            {
                return b;
            }
            a = a % b;
        }
        else
        {
            if (b % a == 0)
            {
                return a;
            }
            b = b % a;
        }
    }
}

int main()
{
    unsigned long N, i, g, sum = 0;
    scanf("%lu", &N);

    unsigned long H[N];

    for (i = 0; i < N; ++i)
    {
        scanf("%lu", &H[i]);

        if (N == 1)
        {
            printf("%lu", H[0]);
            return 0;
        }

        if (i == 0)
        {
            g = H[i];
        }

        if (i != 0)
        {
            g = gcd(g, H[i]);
        }
    }

    for (i = 0; i < N; ++i)
    {
        sum += H[i] / g;
    }

    printf("%lu", sum);
}