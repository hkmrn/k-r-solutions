#include <stdio.h>


int _itoa_r(long n, char s[], int count)
{
    int new = count;

    if (n < 0)
    {
        s[count++] = ('-');
        n = -n;
    }
    if (n / 10)
    {
        new = _itoa_r(n / 10, s, count);
    } else 
    {
        new = count;
        s[new + 1] = '\0';
    }

    s[new] = n % 10 + '0';

    return new + 1;
}

void itoa(int n, char s[])
{
    _itoa_r((long) n, s, 0);
}

int main(void)
{
    char buffer[100];
    itoa(-123, buffer);
    printf("%s\n", buffer);

    return 0;
}