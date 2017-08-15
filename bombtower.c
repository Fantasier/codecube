#include <stdio.h>
#include <math.h>

int main()
{

    unsigned long N, B, count = 1; // count มี 2

    scanf("%lu", &N);
    scanf("%lu", &B);

    unsigned long i, j;
    int is_prime;
    for (i = 3; i <= N; i = i + 2)
    {
        is_prime = 1;
        for (j = 3; j <= sqrt(i); j = j + 2)
        {
            if (i != j && i % j == 0)
            {
                is_prime = 0;
                break; // มีตัวที่หารลงตัวที่ไม่ใช่ตัวเอง
            }
        }

        if (is_prime == 1)
        {
            count++;
        }
    }

    if (B > count)
    {
        printf("%i", 0);
    }
    else
    {
        printf("%lu", count - B);
    }

    // printf("%lu", count);
    return 0;
}