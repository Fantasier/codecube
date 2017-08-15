#include <stdio.h>

int main()
{
    unsigned long a, b, gcd = 1;
    scanf("%lu", &a);
    scanf("%lu", &b);

    if (a == 0)
    {
        printf("%lu", b);
        return 0;
    }

    if (b == 0)
    {
        printf("%lu", a);
        return 0;
    }

    if (a % b == 0)
    {
        printf("%lu", b);
        return 0;
    }

    if (b % a == 0)
    {
        printf("%lu", a);
        return 0;
    }

    while (1)
    {
        if (a > b)
        {
            if (a % b == 0)
            {
                gcd = b;
                break;
            }
            else
            {
                a = a % b;
            }
        }
        else
        {
            if (b % a == 0)
            {
                gcd = a;
                break;
            }
            else
            {
                b = b % a;
            }
        }
    }

    printf("%lu", gcd);
    return 0;
}