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
    unsigned long a, b;
    scanf("%lu", &a);
    scanf("%lu", &b);

    if (a == 1 || a == b)
    {
        printf("%lu", b);
        return 0;
    }

    if (b == 1)
    {
        printf("%lu", a);
        return 0;
    }

    // find gcd
    printf("%lu", (a * b) / gcd(a, b));
    return 0;
}