#include <stdio.h>
#include <ctype.h>
#include <math.h>
#define MAX_STRING 1000


double atof(char s[])
{
    double val, power;
    int i, sign, exponentInt;
    char exponent[MAX_STRING] = "";

    for (i = 0; isspace(s[i]); ++i)
        ;

    sign = (s[i] == '-') ? -1 : 1;

    if (s[i] == '-' || s[i] == '+')
    {
        ++i;
    }

    for (val = 0.0; isdigit(s[i]); ++i)
    {
        val = 10.0 * val + (s[i] - '0');
    }

    if (s[i] == '.')
    {
        ++i;
    }

    for (power = 1.0; isdigit(s[i]); ++i)
    {
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
    }

    if (s[i] == 'e' || s[i] == 'E')
    {
        ++i;
    }

    int j;
    for (j = 0; s[i] != '\0'; ++i)
    {
        exponent[j++] = s[i];
    }
    exponent[j] = '\0';

    int atoi(char s[]);
    exponentInt = (exponent[0] != '\0') ? atoi(exponent) : 0;

    return sign * val / power * pow(10, exponentInt);
}

int atoi(char s[])
{
    return (int) atof(s);
}

int main(void)
{
    char num[] = "  -42.829e-2";
    printf("%g\n", atof(num));

    return 0;
}