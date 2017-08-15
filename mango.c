#include <stdio.h>
#include <string.h>

int main()
{
    char l[2], out[1000001], S[1000001], M[1000001];
    unsigned long i, length;
    short k;

    scanf("%s", S);
    scanf("%s", M);

    length = strlen(S);

    for (i = 0; i < length; ++i)
    {
        if (S[i] < 97)
        {
            S[i] = S[i] + 32;
        }
        if (M[i] < 97)
        {
            M[i] = M[i] + 32;
        }

        k = S[i] - M[i];

        if (k < 0)
        {
            k = k + 26;
        }

        if (k < 0 || k > 9)
        {
            printf("R.I.P.");
            return 0;
        }

        sprintf(l, "%i", k);
        out[i] = l[0];
    }

    out[i + 1] = '\0';

    printf("%s", out);
    return 0;
}