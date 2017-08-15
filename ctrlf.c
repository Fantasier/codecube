#include <stdio.h>

int main()
{
    unsigned int m, n, i, c, j, match, all = 0;

    scanf("%i %i", &m, &n);

    char haystack[m], needle[n];

    scanf("%s", &haystack[0]);
    scanf("%s", &needle[0]);

    for (i = 0; i < m; ++i)
    {
        c = 0;
        match = 1;
        for (j = i; j < i + n; ++j)
        {
            if (haystack[j] != needle[c])
            {
                match = 0;
                break;
            }
            c++;
        }
        if (match == 1)
        {
            all++;
        }
    }

    printf("%i", all);

    return 0;
}