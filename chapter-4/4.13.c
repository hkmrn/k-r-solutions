#include <stdio.h>
#include <string.h>


void _reverse_r(char s[], int min, int max)
{
    if (min >= max)
    {
        return;
    }
    char temp = s[min];
    s[min] = s[max];
    s[max] = temp;
    _reverse_r(s, min + 1, max - 1);
}

void reverse(char s[])
{
    _reverse_r(s, 0, strlen(s) - 1);
}

int main(void)
{
    char x[] = "hello there";
    reverse(x);
    printf("%s\n", x);

    return 0;
}